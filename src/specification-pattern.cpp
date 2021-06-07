#include <iostream>
#include <vector>

enum Color {
    Green = 0,
    Blue = 1,
    Red = 2
};
enum Size {
    Small = 0,
    Medium = 1,
    Large = 2
};

struct Item {
    std::string m_Name;
    Color m_Color;
    Size m_Size;

public:
    Item(std::string&& name, Color color, Size size) : m_Name(name), m_Color(color), m_Size(size) {}
};

template<typename T> class AndSpecification;

template<typename T> class Specification {
public:
    virtual bool IsMatch(const T& item) const = 0;

    AndSpecification<T> operator&&(const Specification<T>& other) {
        return AndSpecification(*this, other);
    }
};

template<typename T> class Filter {
public:
    virtual std::vector<T*> filter(const std::vector<T*>& items, const Specification<Item>& spec) = 0;
};

class ItemFilter : public Filter<Item> {
public:
    std::vector<Item *> filter(const std::vector<Item *>& items, const Specification<Item>& spec) override {
        std::vector<Item*> result;
        std::copy_if(items.begin(), items.end(), std::back_inserter(result),
                     [&](Item* item){ return spec.IsMatch(*item); });
        return result;
    }
};

template<typename T> class AndSpecification : public Specification<T> {
private:
    const Specification<T>& m_S1;
    const Specification<T>& m_S2;
public:
    AndSpecification(const Specification<T>& s1, const Specification<T>& s2) : m_S1(s1), m_S2(s2) {}

    bool IsMatch(const T &item) const override {
        return m_S1.IsMatch(item) && m_S2.IsMatch(item);
    }
};

class ColorSpecification : public Specification<Item> {
private:
    Color m_Color;
public:
    ColorSpecification(Color color) : m_Color(color) {}

    bool IsMatch(const Item &item) const override {
        return m_Color == item.m_Color;
    }
};

class SizeSpecification : public Specification<Item> {
private:
    Size m_Size;
public:
    SizeSpecification(Size size) : m_Size(size) {}

    bool IsMatch(const Item &item) const override {
        return m_Size == item.m_Size;
    }
};
/*
int main() {
    Item apple = {"Apple", Color::Red, Size::Small};
    Item car = {"Car", Color::Blue, Size::Large};
    Item bike = {"Bike", Color::Green, Size::Medium};
    std::vector<Item*> items = {&apple, &car, &bike};
    ItemFilter itemFilter;

    auto spec = ColorSpecification(Color::Red) && SizeSpecification(Size::Small);
    for (Item* item : itemFilter.filter(items, spec)) {
        std::cout << item->m_Name << " " << item->m_Color << " " << item->m_Size << "\n";
    }
    return 0;
}
*/