#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int i = 2, j;
    unsigned long long sum = 0;
    bool prime;
    while (i<2000000) {
        j = 2;
        prime = true;
        while (j<=sqrt(i)) {
            if (i%j==0) {
                prime=false;
                break;
            }
            j ++;
        }
        if (prime==true)
            sum += i;
        i ++;
    }
    printf("%llu\n", sum);
    return 0;
}