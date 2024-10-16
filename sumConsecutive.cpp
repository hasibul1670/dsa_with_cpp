
#include <iostream>
using namespace std;
int main()
{

    int t, x, y;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> x;
        cin >> y;
        int minX = min(x, y) + 1;
        int maxY = max(x, y);
        int sum = 0;
        for (minX; minX < maxY; minX++)
        {
            if (minX % 2 != 0)
            {
                sum += minX;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
