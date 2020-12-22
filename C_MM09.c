#include <math.h>
#include <stdio.h>

int main()
{
    long long int i;
    while (scanf("%lld", &i) != EOF)
    {
        if (i > 31)
            printf("Value of more than 31\n");
        else
            printf("%lld\n", (long long int)1 << i);
    }
}