#include <stdio.h>
#include <stdbool.h>

bool is_prime(unsigned long long a);

int main()
{
    unsigned long long i = 2, x;
    scanf("%llu", &x);
    printf("%llu = ", x);
    while (i<=x) {
        while (x%i==0 && is_prime(i)) {
            printf("%llu", i);
            if (x!=i)
                printf(" * ");
            x /= i;
        }
        i ++;
    }
    return 0;
}

bool is_prime(unsigned long long a)
{
    unsigned long long i = 2;
    while (i<a) {
        if (a%i==0)
            return false;
        i ++;
    }
    return true;
}
