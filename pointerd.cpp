#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *ptr = a;
    cout << &a[0] << " " << ptr << endl;

    return 0;
}