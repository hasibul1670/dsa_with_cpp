#include <bits/stdc++.h>
using namespace std;

int main()
{
    char N;
    cin >> N;
    if ('a' <= N && N <= 'z')
    {
        N -= 32;
    }
    else
    {
        N += 32;
    }

    cout << N;
    return 0;
}