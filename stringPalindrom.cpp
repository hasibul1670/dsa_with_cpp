#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    cin >> A;
    bool isPalindrome = true;

    for (int i = 0; i < A.length() / 2; i++)
    {
        if (A[i] != A[A.length() - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
