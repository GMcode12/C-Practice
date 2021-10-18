#include <iostream>
using namespace std;

class Dollar;

class Rupees
{
    int rup;

public:
    Rupees(int r = 0) : rup{r} {}

    void print()
    {
        cout << "Rupees: " << rup;
    }


};
class Dollar
{
    int doll;

public:
    Dollar(int d = 0) : doll{d} {}
    void print()
    {
        cout << "Dollar: " << doll;
    }

    //r=d
    operator Rupees()
    {
        return Rupees(doll * 10);
    }
};
int main()
{
    Dollar d(10);
    Rupees r;
    r = d; //d.Rupees
    r.print();

    return 0;
}