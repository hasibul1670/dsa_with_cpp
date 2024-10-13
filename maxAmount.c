#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxSalami = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > maxSalami)
        {
            maxSalami = arr[i];
        }
    }

    for (int i = 0; i < N; i++)
    {

        arr[i] = maxSalami - arr[i];

        printf("%d ", arr[i]);
    }

    return 0;
}