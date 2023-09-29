#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int f[40] = {0};
    f[0] = 1;
    f[1] = 2;
    for (i=2 ; i<40 ; i++)
        f[i] = f[i-1] + f[i-2];
    for (i=0 ; i<40 ; i++)
        if (f[i]%2==0 && f[i]<=4000000)
            sum += f[i];
    printf("%d\n", sum);
    return 0;
}