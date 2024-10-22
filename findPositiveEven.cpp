#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;
    while (N--)
    {
        int L, R;
        cin >> L >> R;
        int lftEven = (L % 2 == 0) ? L : L + 1;
        int rgtEven = (R % 2 == 0) ? R : R - 1;

        if (lftEven > rgtEven)
        {
           cout << 0 << endl;  
        }
        else
        {
            cout << (rgtEven - lftEven) / 2 + 1<<endl;
        }
    }

    return 0;
}