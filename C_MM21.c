#include <math.h>
#include <stdio.h>
long long int function(long long int a);

int main()
{
    long long int x;
    while (scanf("%lld", &x) != EOF)
    {
        printf("%lld\n", function(x));
    }
}

long long int function(long long int a)
{
    if (a <= 1)
        return 1;
    else
        return (a * function(a - 1));
}