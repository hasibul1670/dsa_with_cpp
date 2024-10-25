#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, T, bookCount = 0;
    cin >> N >> T;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int TotalTime = 0;
    for (int i = 0; i < N; i++)
    {
        TotalTime += A[i];
        if (TotalTime <= T)
        {
            bookCount++;
        }
    }

    cout << bookCount;
}