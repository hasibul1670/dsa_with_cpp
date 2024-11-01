#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    map<int, int> freq;

    for (int num : A)
    {
        freq[num]++;
    }

    int count = 0;

    for (const auto &p : freq)
    {
        if (p.second == 1)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}