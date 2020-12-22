#include <math.h>  
#include <stdio.h>  
  
int main()  
{  
    long long int x;  
    while (scanf("%lld", &x) != EOF)  
    {  
        printf("%lld %lld %lld\n", x, x * x, x * x * x);  
    }  
} 