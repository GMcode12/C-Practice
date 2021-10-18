#include <iostream>
using namespace std;

class Test
{
    int *x;

public:
    Test(int val = 0) : x{new int(val)} {}
    void setX(int val)
    {
        *x = val;
    }

    void print()
    {
        cout << " OUTPUT: " << *x << endl;
    }

    Test &operator=(const Test &rhs)
    {
        if (this != &rhs)
        {
            *x = *rhs.x;
        }
        return *this;
    }

    ~Test() { delete x; }
};

int main()
{
    Test t1(10);
    Test t2;
    t2 = t1;
    t1.setX(20);
    t1.print();
    t2.print();
}