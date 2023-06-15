#include <stdio.h>

int main()
{
    int i = 1, j;
    unsigned long long k;
    int max = 0, longest;
    while (i<1000000) {
        k = i;
        j = 0;
        printf("%d: ", k);
        while (k!=1) {
            if (k%2==0)
                k /= 2;
            else if (k%2==1)
                k = 3*k + 1;
            j ++;
        }
        if (j>max) {
            max = j;
            longest = i;
        }
        i ++;
        printf("%d\n", j);
    }
    printf("%d %d\n", longest, max);
    return 0;
}