#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i].length() > 10)
        {
            cout << A[i][0] << A[i].length() - 2 << A[i][A[i].length() - 1] << endl;
        }
        else
        {
            cout << A[i] << endl;
        }
    }

    return 0;
}