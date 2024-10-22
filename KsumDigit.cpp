#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, sum = 0;
    string digit;
    cin >> N;
    cin >> digit;
    vector<int> A(N);
    for (int i = 0; i < digit.length(); i++)
    {
       sum += digit[i] - '0'; 
    }
    cout << sum << endl;

    return 0;
}