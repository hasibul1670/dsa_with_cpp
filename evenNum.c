#include <stdio.h>
int main()
{
    int N;

    scanf("%d", &N);
    int eventCount = 0;
    for (int i = 1; i <= N; i++)
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            eventCount = 1;
        }

    if (!eventCount)
    {
        printf("-1");
    }
    return 0;
}