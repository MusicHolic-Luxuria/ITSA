#include <math.h>
#include <stdio.h>

int main()
{
    long long int x, y;
    while (scanf("%lld %lld", &x, &y) != EOF)
    {
        printf("%lld\n", (x + y) * (x + y));
    }
}