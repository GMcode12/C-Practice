#include <iostream>
using namespace std;

class Point
{
    int arr[2]; //arr[0]->x  and arr[1]->y

public:
    Point(int x = 0, int y = 0)
    {
        arr[0] = x;
        arr[1] = y;
    }
    void print()
    {
        cout << "x: " << arr[0] << "  y: " << arr[1] << endl;
    }

    int &operator[](int pos)
    {
        if (pos == 0)
            return arr[0];
        else if (pos == 1)
            return arr[1];
        else
            cout << "Out of Bound\n";
        exit(0);
    }
};

int main()
{
    Point p1(3, 4);
    p1.print();

    p1[0] = 9; //function will return arr[0] of obj p1
    p1[1] = 8; //function will return arr[1] of obj p1

    //p1[4]=9; // out of bound

    p1.print();

    return 0;
}