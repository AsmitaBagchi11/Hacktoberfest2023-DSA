#include <stdio.h>
long fact(int);
int main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    long r;
    r = fact(num);
    printf("\n%d!=%ld", num, r);
    return 0;
}

long fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}