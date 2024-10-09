
#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if (a + b * c == d || a - b * c == d ||
        a * b + c == d || a * b - c == d ||
        a + b - c == d || a - b + c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

// 1. Read input values a, b, c, and d.
// 2. Check the following conditions:
//    a. (a + b) * c == d
//    b. (a - b) * c == d
//    c. (a * b) + c == d
//    d. (a * b) - c == d
//    e. (a + b) - c == d
//    f. (a - b) + c == d
// 3. If any of these conditions are true:
//    a. Print "YES"
// 4. Otherwise:
//    a. Print "NO"
