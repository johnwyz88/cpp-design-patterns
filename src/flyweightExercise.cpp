#include <iostream>
#include <boost/bimap.hpp>
#include <boost/flyweight.hpp>

using namespace std;
using namespace boost;

typedef uint32_t key;

struct User {
    User(const string& first, const string& last) : first(add(first)), last(add(last)) {}

    string getFirst() const {
        return dict.left.find(first)->get_right();
    }

    string getLast() const {
        return dict.left.find(last)->get_right();
    }

    friend ostream &operator<<(ostream &os, const User &user) {
        os << "first: " << user.getFirst() << " last: " << user.getLast();
        return os;
    }

    key first, last;
    static bimap<key, string> dict;
    static key count;

    static key add(string name) {
        auto it = dict.right.find(name);
        if (it != dict.right.end()) {
            return it->get_left();
        }
        dict.insert({++count, name});
        return count;
    }
};

struct User2 {
    User2(const string& firstName, const string& lastName) : firstName(firstName), lastName(lastName) {}

    friend ostream &operator<<(ostream &os, const User2 &user) {
        os << "firstName: " << user.firstName << " lastName: " << user.lastName;
        return os;
    }

    flyweight<string> firstName, lastName;
};

int main() {
    User u1 = {"John", "Wang"};
    User u2 = {"Jane", "Wang"};
    cout << u1 << endl << u2 << endl;
    cout << (u1.first == u2.first) << endl;
    cout << (u1.last == u2.last) << endl;

    User2 user1 = {"John", "Wang"};
    User2 user2 = {"Jane", "Wang"};
    cout << user1 << endl << user2 << endl;
    cout << (&user1.firstName.get() == &user2.firstName.get()) << endl;
    cout << (&user1.lastName.get() == &user2.lastName.get()) << endl;
}