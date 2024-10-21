#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    cin >> A;

    for (char &ch : A)
    {
    
        if (ch == ',')
        {
            ch = ' ';
        }
       
        else if (isupper(ch))
        {
            ch = tolower(ch);
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
        }
    }

    cout << A << endl;
    return 0;
}