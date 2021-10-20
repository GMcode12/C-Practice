#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void fun() { cout << "Inside Animal\n"; }
};

class Cat : public Animal
{

public:
    void fun() { cout << "Inside Cat\n"; }
};

class Cow : public Animal
{

public:
    void fun() { cout << "Inside Cow\n"; }
};

int main()
{
    // a is of Animal type but contains derived obj / pointing to derived obj
    Animal *a = new Cat;
    a->fun();   //inside cat
    delete (a);

    Animal *b = new Cow();
    b->fun(); //inside cow

    
    return 0;
}