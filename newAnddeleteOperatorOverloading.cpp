#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int x = 0) : x{x} {}

    //Local overloading

    void *operator new(size_t size)
    {
        cout << "New Operator Overoaded\n";
        void *p = malloc(size);
        return p;
    }

    void operator delete(void *p)
    {
        cout << "Delete Operator Overloaded\n";
        free(p);
    }
};

//for global overloading
void *operator new(size_t size)
{
    cout << "global New Operator Overoaded\n";
    void *p = malloc(size);
    return p;
}

void operator delete(void *p)
{
    cout << "global Delete Operator Overloaded\n";
    free(p);
}

    //overloading array vesion new operator

void *operator new[](size_t size)
{
    cout << "array New Operator Overoaded\n";
    void *p = malloc(size);
    return p;
}

void operator delete[](void *p)
{
    cout << "array Delete Operator Overloaded\n";
    free(p);
}


int main()
{
    // Local overloading of new and delete inside class
    Test *t = new Test(10);
    delete t;

    // global overloading

    int *x = new int;
    delete x;

    //overloading array vesion new operator

    int *m=new int[10];
    delete[] m;

    return 0;
}