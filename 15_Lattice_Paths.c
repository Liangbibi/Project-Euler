#include <stdio.h>

int main()
{
    int i, j;
    unsigned long long grid[21][21] = {0};
    for (i=0 ; i<21 ; i++)
        for (j=0 ; j<21 ; j++) {
            if (i==0 || j==0)
                grid[i][j] = 1;
            else
                grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    printf("%llu\n", grid[20][20]);
    return 0;
}