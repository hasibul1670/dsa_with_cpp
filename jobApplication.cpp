#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> E;
        if (E < 1)
        {
            cout << "Entry-level candidate" << endl;
        }
        else if (E>=1 && E <= 3)
        {
            cout << "Junior candidate" << endl;
        }
        else if (E>=4 && E<=7)
        {
            cout << "Mid-level candidate" << endl;
        }
        else
        {
            cout << "Senior candidate" << endl;
        }
    }
}