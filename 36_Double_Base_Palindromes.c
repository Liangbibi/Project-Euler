#include <stdio.h>
#include <stdbool.h>

bool palindrome_2(int n);
bool palindrome_10(int n);

int main()
{
    int i;
    int sum = 0;                        // The answer of this question.
    for (i=1 ; i<1000000 ; i++) {
        if (palindrome_2(i) && palindrome_10(i))
            sum += i;
    }
    printf("%d\b", sum);
    return 0;
}

bool palindrome_2(int n)
{
    int i, j = 0;
    int digit[20];
    bool a = true;
    while (n>0) {
        digit[j] = n % 2;
        n /= 2;
        j ++;
    }
    for (i=0 ; i<j/2 ; i++)
        if (digit[i]!=digit[j-1-i])
            a = false;
    return a;
}

bool palindrome_10(int n)
{
    int i, j = 0;
    int digit[6];
    bool a = true;
    while (n>0) {
        digit[j] = n % 10;
        n /= 10;
        j ++;
    }
    for (i=0 ; i<j/2 ; i++)
        if (digit[i]!=digit[j-1-i])
            a = false;
    return a;
}