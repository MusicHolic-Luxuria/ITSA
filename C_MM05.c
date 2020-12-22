#include <math.h>
#include <stdio.h>

int main()
{
    double edge;
    while (scanf("%lf", &edge) != EOF)
    {
        printf("%.1f\n", floor(edge * edge * 10 + 0.5) / 10); //處理浮點數不精確的問題
    }
}