#include <math.h>
#include <stdio.h>

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x < y) //把x>y
        {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int i = y; i > 0; i--)
        {
            if (x % i == 0 && y % i == 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
}