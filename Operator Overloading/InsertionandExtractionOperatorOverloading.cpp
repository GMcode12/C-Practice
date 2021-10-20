#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int x = 0)
    {
        this->x = x;
    }
    void print()
    {
        cout << "x: " << x << endl;
    }

    //declaring friend cause to access the private data member of class -> int x.
    friend istream &operator>>(istream &input, Test &obj);
    friend ostream &operator<<(ostream &output, Test &obj);
};

//declaring outside Test because cin is an object of istream class and we are overloading the >>
//operator on these objects hence they are outside the Test class same with cout also.

istream &operator>>(istream &input, Test &obj)
{
    input >> obj.x;
    return input;
}

ostream &operator<<(ostream &output, Test &obj)
{
    output << obj.x;
    return output;
}

int main()
{
    Test t1, t2;
    t1.print();

    cin >> t2;
    cout << t2;

    return 0;
}