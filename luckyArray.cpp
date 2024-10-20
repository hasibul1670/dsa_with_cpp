#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int counter = 0;
    long long A[n];
    int minEle = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] < minEle)
        {
            minEle = A[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] == minEle)
        {
            counter++;
        }
    }
    if (counter % 2 != 0)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }
    return 0;
}
