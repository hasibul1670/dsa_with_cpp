#include <stdio.h>

int main() {
    int N, tens, units;
    scanf("%d", &N);
    tens = N / 10;  
    units = N % 10; 

    if (units != 0 && tens % units == 0 || tens != 0 && units % tens == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
