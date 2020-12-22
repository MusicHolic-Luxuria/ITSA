#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        int sum = 0;
        for (int i = 0; i <= x; i++)
        {
            if (i % 6 == 0 && i % 12 != 0)
                sum += i;
        }
        printf("%d\n", sum);
    }
}