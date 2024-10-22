#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> frequency(10, 0);
    string digits;
    cin >> digits;
    int maxFrequency = 0;
    int resultDigit = 0;
    for (char digit : digits) {
        frequency[digit - '0']++;
    }


    for (int i = 0; i < 10; i++)
    {
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            resultDigit = i;
        }
    }

    cout << resultDigit << endl;

    return 0;
}