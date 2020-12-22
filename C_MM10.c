#include <math.h>
#include <stdio.h>

int main()
{
    double c;
    while (scanf("%lf", &c) != EOF)
    {
        printf("%.1f\n", floor((c * 1.8 + 32) * 10 + 0.5) / 10); //處理浮點數不精確的問題
    }
}