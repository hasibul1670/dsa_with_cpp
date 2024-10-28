#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    //? print

    for (int i = 0; i < r; i++)
    {
        a[0][0] = 1;
        a[1][1] = 1;
        a[2][2] = 1;
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}