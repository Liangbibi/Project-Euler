#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0, j = 0, k = 1;
    int x;
    while (j<250) {                     // Because the next comment outing, if we find the 251st factor,
        i += k;                         // then it represent that i has at least 501 facotrs, and if we only find 250 factors
        j = 0;                          // this represent that i has at most 500 factors, which does not satisfy the statement.
        x = 1;
        printf("factor of %d: ", i);
        while (x<=sqrt(i)) {            // We only need search to sqrt(i), if A is a factor of i, then i/A will be factor of i, too. 
            if (i%x==0) {
                j ++;
                printf("%d ", x);
            }
            x ++;
        }
        printf("\n");
        k ++;
    }
    printf("%d\n", i);
    return 0;
}