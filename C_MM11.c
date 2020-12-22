#include <math.h>
#include <stdio.h>

int main()
{
    long long int price;
    while (scanf("%lld", &price) != EOF)
    {
        long long int NT_10, NT_5, NT_1;
        NT_10 = price / 10;
        NT_5 = price % 10 / 5;
        NT_1 = price % 10 % 5;
        printf("NT10=%lld\n", NT_10);
        printf("NT5=%lld\n", NT_5);
        printf("NT1=%lld\n", NT_1);
    }
}