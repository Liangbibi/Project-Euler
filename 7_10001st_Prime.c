#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int i = 2, j = 1, k;
    bool prime;
    while (j<=10001) {
        k = 2;
        prime = true;
        while (k<=sqrt(i)) {
            if (i%k==0) {
                prime = false;
                break;
            }
            k ++;
        }
        if (prime==true) {
            printf("The %dth prime: %d\n", j, i);
            j ++;
        }
        i ++;
    }
    return 0;
}