#include <iostream>
using namespace std;

//Global Friend function

class Two;

class One
{
    int one;

public:
    One() { one = 1; }
    friend void GlobalFriend(One &, Two &);
};

class Two
{
    int two;

public:
    Two() { two = 2; }

    friend void GlobalFriend(One &, Two &);
};

void GlobalFriend(One &o, Two &t)
{
    cout << " One: " << o.one << endl;
    cout << " Two: " << t.two << endl;
}
int main()
{

    One o;
    Two t;

    //not member function of any class but still having access to private data

    GlobalFriend(o, t);
    return 0;
}