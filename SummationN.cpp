
#include <iostream>
using namespace std;

int facto(int i)
{
    if (i <= 1)
        return 1;
    else
        return i * facto(i - 1);
}

int main()
{
    int n, fact;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cout << facto(x) << endl;
    }
    return 0;
}



// int factorial(int i) {
//     if (i <= 1)  // Base Case
//         return 1;
//     else  // Recursive Case
//         return i * factorial(i - 1);
// }
// The base case occurs when i <= 1. It returns 1 because the factorial of 0 or 1 is 1.
// The recursive case calls the function again with i - 1 until it reaches the base case.