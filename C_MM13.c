#include <math.h>
#include <stdio.h>

int main()
{
    int start_hour, start_min;
    int end_hour, end_min;
    scanf("%d %d", &start_hour, &start_min);
    scanf("%d %d", &end_hour, &end_min);

    int total_hour = end_hour - start_hour;
    int total_min = end_min - start_min;
    while (total_hour--) //換算成min
    {
        total_min += 60;
    }

    int total_part = total_min / 30; //每30min為一part
    int total_money = 0;
    for (int i = 0; (i < 4) && (total_part-- > 0); i++)
    {
        total_money += 30;
    }
    for (int i = 0; (i < 4) && (total_part-- > 0); i++)
    {
        total_money += 40;
    }
    for (int i = 0; total_part-- > 0; i++)
    {
        total_money += 60;
    }
    printf("%d\n", total_money);
}