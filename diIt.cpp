#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int j = 0;
    while (j < N)
    {

        for (int i = 1; i <= K; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        j++;
    }
}