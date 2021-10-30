#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{9, 8, 7}, {6, 5, 4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] : %d\n", i, j, *(*(arr + i) + j));
        }
    }

    return 0;
}
