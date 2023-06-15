#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, j, k;
    int sum = 0;
    int digit[302] = {0};
    bool notzero;
    digit[0] = 1;
    for (i=1 ; i<=1000 ; i++) {
        k = 0;
        notzero = false;
        for (j=0 ; j<302 ; j++)
            digit[j] *= 2;
        while (k<302) {
            if (digit[k]>=10) {
                digit[k+1] += (digit[k] / 10);
                digit[k] = digit[k]%10;
            }
            k ++;
        }
        for (j=301 ; j>=0 ; j--) {
            if (digit[j]!=0)
                notzero = true;
            if (notzero==true)
                printf("%d", digit[j]);
        }
        printf("\n");
    }
    for (i=0 ; i<302 ; i++)
        sum += digit[i];
    printf("%d\n", sum);
    return 0;
}