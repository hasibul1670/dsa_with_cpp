#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, start, end, phoneCount = 0;
    cin >> N >> start >> end;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (start <= A[i] && A[i] <= end)
        {
            phoneCount++;
        }
    }

    cout << phoneCount;
}