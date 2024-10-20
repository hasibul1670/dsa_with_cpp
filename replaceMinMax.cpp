#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        if (A[i] < A[minIndex])
        {
            minIndex = i;
        }
        if (A[i] > A[maxIndex])
        {
            maxIndex = i;
        }
    }
    swap(A[minIndex], A[maxIndex]);

    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
