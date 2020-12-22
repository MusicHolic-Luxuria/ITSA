#include <math.h>
#include <stdio.h>

int main()
{
    int time;
    while (scanf("%d", &time) != EOF)
    {
        double money = 0;
        if (time >= 1500)
        {
            while (time--)
            {
                money += 0.9 * 0.79;
            }
        }
        else if (time > 800 && time < 1500)
        {
            while (time--)
            {
                money += 0.9 * 0.9;
            }
        }
        else
        {
            while (time-- > 0)
            {
                money += 0.9;
            }
        }
        printf("%.1f\n", money);
    }
}