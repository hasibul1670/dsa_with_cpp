#include <stdio.h>
int main()
{
    int N, zeroCounter = 0, oneCounter = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {

        if (arr[i] == 0)
        {
            zeroCounter++;
        }
        else if (arr[i] == 1)
        {
            oneCounter++;
        }
    }

    printf("%d %d ", zeroCounter, oneCounter);
    return 0;
}