#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x{x}, y{y} {}

    void print()
    {
        cout << "x: " << x << " "
             << "y: " << y << endl;
    }

    Point operator-()
    {
        return Point(-x, -y);
    }
};

int main()
{
    Point p1(8, 7);
    Point p2 = -p1;
    //p1 is calling the function
    p1.print();
    p2.print();
}