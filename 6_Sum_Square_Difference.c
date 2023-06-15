#include <stdio.h>

int main()
{
    int i, j;
    int sum1 = 0, sum2 = 0;
    for (i=1 ; i<=100 ; i++) {
        sum1 += (i*i);
        sum2 += i;
    }
    sum2 = sum2 * sum2;
    printf("%d\n", sum2 - sum1);
    return 0;
}