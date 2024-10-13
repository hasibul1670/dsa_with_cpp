#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char A;
    scanf("%c", &A);
    if (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u')

    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}