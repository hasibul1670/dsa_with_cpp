
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // int a = 8;
    // int *b = &a;

    // A pointer is a variable that stores the address of another variable.

    // cout << "value  : " << a << endl;
    // cout << "Address : " << b << endl;
    // *b = 45;

    // cout << "C : " << *b << endl;
    // cout << "A : " << a << endl;

    //! Pointer Arithmetic

    // int arr[] = {10, 20, 30, 40, 50};
    // int *ptr = arr;

    // arr[1] = 80;

    // cout << *ptr << endl;
    // cout << *(ptr + 1) << endl;
    // return 0;

    //!  Pointers with Functions

    int x = 5;
    int y = 10;
    cout << "Before Swap " << x << "-->" << y << endl;
    swap(&x, &y);
    cout << "After swap " << x << "-->" << y << endl;
}
