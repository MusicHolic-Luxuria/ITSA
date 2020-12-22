#include <math.h>
#include <stdio.h>

int main()
{
    int hour, pay;
    while (scanf("%d %d", &hour, &pay) != EOF)
    {
        double money = 0;
        while (hour > 120)
        {
            hour--;
            money += pay * 1.66;
        }
        while (hour > 60)
        {
            hour--;
            money += pay * 1.33;
        }
        while (hour > 0)
        {
            hour--;
            money += pay;
        }
        printf("%.1f\n", money);
    }
}