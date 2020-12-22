#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                if (i == 1)
                    printf("1");
                else
                    printf(" %d", i);
            }
        }
        printf("\n");
    }
}