#include <iostream>
using namespace std;
class Test1;


class Test
{
    int x;

public:
    Test(int x = 0) : x{x} {}

    //friend class
    //Test1 can access the private data of Test

    friend class Test1;


    void showTest1(Test1& t);
};

class Test1
{

    int m;

public:
    Test1(int m = 0) : m{m} {}

    void ShowTest(Test &t)
    {
        cout << "Test::x = " << t.x << endl;
    }

    // friend function
    //only Show() of Test can accsess private data of Test1
    friend void Test::showTest1(Test1&);
};


void Test::showTest1(Test1 &t)
{
    cout << "Test1::m = " << t.m  <<endl;
}

int main()
{
    Test t(10);
    Test1 t1(20);
    t1.ShowTest(t);

    t.showTest1(t1);
    return 0;
}
