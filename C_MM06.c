#include <math.h>
#include <stdio.h>

int main()
{
    double distance;
    while (scanf("%lf", &distance) != EOF)
    {
        printf("%.1f\n", floor(distance * 1.6 * 10 + 0.5) / 10); //處理浮點數不精確的問題
    }
}