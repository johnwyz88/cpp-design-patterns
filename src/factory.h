#include <string>
using namespace std;

struct Person
{
    int id;
    string name;
};

class PersonFactory
{
    int id = 0;
public:
    Person create_person(const string& name)
    {
        Person result;
        result.id = this->id++;
        result.name = name;
        return result;
    }
};