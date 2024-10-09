#include <stdio.h>
int main()
{
    int N;
    long long sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        long long nums;
        scanf("%lld", &nums);
        sum = sum + nums;
    }

    if (sum < 0)
    {
        sum = sum * (-1);
    }
    printf("%lld ", sum);
    return 0;
}