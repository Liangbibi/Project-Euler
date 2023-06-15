#include <stdio.h>

int main()
{
    int i, j, k;                    // Let k be largest number, thus k is in [334, 450]. (450 is estimation)
    for (k=334 ; k<=450 ; k++) {
        i = k - 1;
        j = 1000 - i - k;
        while (i<k && j<k) {
            if (i*i+j*j==k*k)   
                printf("%d %d %d %d\n", i, j, k, i*j*k);
            i --;
            j ++;
        }
    }
    return 0;
}