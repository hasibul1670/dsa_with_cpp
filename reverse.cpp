#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = n ; i >= 1; i--)
    {
        cout << A[i] << " ";
    }

    return 0;
}
