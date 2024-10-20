#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    int max = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << max << endl;
    return 0;
}
