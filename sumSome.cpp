#include <bits/stdc++.h>
using namespace std;

int sumDigit(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}
int main()
{
    int N, A, B, sum = 0;
    cin >> N;
    cin >> A >> B;
    for (int i = 1; i <= N; i++)
    {

        int res = sumDigit(i);
        if (res >= A && res <= B)
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}