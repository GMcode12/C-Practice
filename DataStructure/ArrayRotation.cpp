#include <iostream>
using namespace std;

//Array Rotation
//IMPLEMENTTION OF REVERSAL ALGORITHM

void reverse(int *arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int *ReverseLeft(int *arr, int r, int n)
{
    r = r % n;
    reverse(arr, 0, r - 1);
    reverse(arr, r, n - 1);
    reverse(arr, 0, n - 1);

    return arr;
}

int *ReverseRight(int *arr, int r, int n)
{
    r = r % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, r - 1);
    reverse(arr, r, n - 1);

    return arr;
}

void Print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int r = 3;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int *ReversePtr = ReverseLeft(arr1, r, n);
    cout << "Left Rotation\n";
    Print(ReversePtr, n);

    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int *ReverseRightptr = ReverseRight(arr2, r, n);
    cout << "Right Rotation\n";
    Print(ReverseRightptr, n);
}
