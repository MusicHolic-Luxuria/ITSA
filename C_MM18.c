#include <math.h>
#include <stdio.h>
int power(int a, int b);

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        int x_bits[8] = {0};
        int time = 0;
        while (time < 8)
        {
            if (x & (int)power(2, time))
                x_bits[time] = 1;
            time++;
        }

        for (int i = 7; i >= 0; i--)
        {
            printf("%d", x_bits[i]);
        }
        printf("\n");
    }
}

int power(int a, int b)
{
    int sum = 1;
    if (b == 0)
        return 1;
    else
    {
        for (; b > 0; b--)
            sum *= a;
        return sum;
    }
}