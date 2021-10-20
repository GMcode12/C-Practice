#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void eat() = 0;
};

//pure virtual function also can have body
//if every this function has common stuff to do then we can use this whenever we want in o
//overriden functions like eat

void Animal::eat()
{
    cout << "I am eating\n";
}

class Cat : public Animal
{
public:
    void cat();
    //Here we must have to override eat function of abstact class animal
    void eat()
    {
        Animal::eat(); //common stuff to do
        cout << "Cat is eating\n";
    }
};

class Cow : public Animal
{
public:
    void eat()
    {
        Animal::eat();
        cout << "Cow is eating\n";
    }
};
int main()
{
    Cat a;
    a.eat();
    Cow c;
    c.eat();
    return 0;
}