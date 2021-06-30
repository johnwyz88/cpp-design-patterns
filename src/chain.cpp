#include <vector>

using namespace std;

struct Creature;
struct Game
{
    vector<Creature*> creatures;
};

struct StatQuery
{
    enum Statistic { attack, defense } statistic;
    int result;
};

struct Creature
{
protected:
    Game& game;
    int base_attack, base_defense;

public:
    Creature(Game &game, int base_attack, int base_defense) : game(game), base_attack(base_attack),
                                                              base_defense(base_defense) {}
    virtual int get_attack() = 0;
    virtual int get_defense() = 0;
    virtual void query(void* source, StatQuery& sq) = 0;
};

class Goblin : public Creature
{
public:
    Goblin(Game &game, int base_attack, int base_defense) : Creature(game, base_attack, base_defense) {}

    Goblin(Game &game) : Creature(game, 1, 1) {}

    int get_attack() override {
        StatQuery q = {StatQuery::Statistic::attack, base_attack};
        for (Creature* g : game.creatures) {
            g->query(this, q);
        }
        return q.result;
    }

    int get_defense() override {
        StatQuery q = {StatQuery::Statistic::defense, base_defense};
        for (Creature* g : game.creatures) {
            g->query(this, q);
        }
        return q.result;
    }

    void query(void *source, StatQuery &sq) override {
        if (source == this) return;
        if (sq.statistic == StatQuery::Statistic::defense) {
            sq.result++;
        }
    }
};

class GoblinKing : public Goblin
{
public:
    GoblinKing(Game &game) : Goblin(game, 3, 3) {}

    int get_attack() override {
        StatQuery q = {StatQuery::Statistic::attack, base_attack};
        for (Creature* g : game.creatures) {
            g->query(this, q);
        }
        return q.result;
    }

    int get_defense() override {
        StatQuery q = {StatQuery::Statistic::defense, base_defense};
        for (Creature* g : game.creatures) {
            g->query(this, q);
        }
        return q.result;
    }

    void query(void *source, StatQuery &sq) override {
        if (source == this) return;
        if (sq.statistic == StatQuery::Statistic::attack) {
            sq.result++;
        }
        if (sq.statistic == StatQuery::Statistic::defense) {
            sq.result++;
        }
    }
};

