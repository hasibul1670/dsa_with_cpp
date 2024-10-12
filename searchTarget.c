#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    unsigned arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%u", &arr[i]);
    }
    unsigned X;
    scanf("%u", &X);

    int count = -1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            count = i;
            break;
        }
    }

    printf("%d", count);

    return 0;
}