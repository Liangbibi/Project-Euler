#include <stdio.h>

int main()
{
    int i, j, k, l;
    int max = 0;
    int x;
    int number[6];
    for (i=999 ; i>=100 ; i--)
        for (j=999 ; j>=100 ; j--)
        {
            k = i*j;
            l = k;
            x = 0;
            if (k%11==0) {
                if (k/100000==0) {
                    while (k>0) {
                        number[x] = k%10;
                        k /= 10;
                        x ++;
                    }
                    if (number[0]==number[4] && number[1]==number[3])
                        if (l>max)
                            max = l;
                }

                else if (k/1000000==0){
                    while (k>0) {
                        number[x] = k%10;
                        k /= 10;
                        x ++;
                    }     
                    if (number[0]==number[5] && number[1]==number[4] && number[2]==number[3])
                        if (l>max)
                            max = l;           
                }
            }
        }

    printf("%d\n", max);
    return 0;
}