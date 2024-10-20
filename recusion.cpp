
#include <iostream>
using namespace std;

void printNumber(int n)
{
    if (n == 1)
    {
        cout << n << endl;
        return;
    }
    printNumber(n - 1);
    cout << n  << endl;
}
int main()
{
    printNumber(5);
    return 0;
}
