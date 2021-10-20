#include <iostream>
using namespace std;

class point
{
    int x;
    int y;

public:
    point(int x = 0, int y = 0) : x{x}, y{y} {}

    point operator+(const point &rhs)
    {
        point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }
    point add(const point& rhs)
    {
        point p;
        p.x=x+rhs.x;
        p.y=y+rhs.y;
        return p;
    }

    void print()
    {
        cout << "x: " << x << "\ny: " << y << endl;
    }
};

int main()
{
    point p1(9, 2);
    point p2(5, 4);
    point p3 = p1 + p2;
    //p1 will call the function and p2 will be passed as argument to function
    point p4=p1.add(p2);
    p4.print();
    p3.print();
}