#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int lowest = A[0];
    int index = 1;
    for (int i = 0; i < N; i++)
        if (A[i] < lowest)
        {
            lowest = A[i];
            index = i + 1;
        }
    printf("%d %d", lowest, index);

    return 0;
}