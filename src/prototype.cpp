#include <boost/serialization/serialization.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <sstream>
#include <ostream>
#include <iostream>


using namespace boost;

struct Point
{
    int x{ 0 }, y{ 0 };

    Point(){}

    Point(const int x, const int y) : x{x}, y{y} {}

    friend std::ostream &operator<<(std::ostream &os, const Point &point) {
        os << "x: " << point.x << " y: " << point.y;
        return os;
    }

private:
    friend class serialization::access;
    template <class archive>
    void serialize(archive& ar, const unsigned version) {
        ar & x;
        ar & y;
    }
};

struct Line
{
    Point *start, *end;

    Line() {}

    Line(Point* const start, Point* const end)
            : start(start), end(end)
    {
    }

    ~Line()
    {
        delete start;
        delete end;
    }

    [[nodiscard]] Line deep_copy() const
    {
        std::ostringstream oss;
        archive::text_oarchive oa(oss);
        oa << *this;
        std::string s = oss.str();

        std::istringstream iss(s);
        archive::text_iarchive ia(iss);
        Line result;
        ia >> result;
        return result;
    }

    friend std::ostream &operator<<(std::ostream &os, const Line &line) {
        os << "start: " << line.start << " end: " << line.end;
        return os;
    }

private:
    friend class serialization::access;
    template <class archive>
    void serialize(archive& ar, const unsigned version) {
        ar & start;
        ar & end;
    }
};

/*
int main()
{
    Line l1 {new Point(0, 0), new Point (1, 1)};
    Line l2 = l1.deep_copy();
    std::cout << "l1 start: " << l1.start << " l2 start:" << l2.start << " l1 end:" << l1.end << " l2 end:" << l2.end << std::endl;
    std::cout << l2.start->x << " " << l2.start->y << " " << l2.end->x << " " << l2.end->y << std::endl;
}
 */