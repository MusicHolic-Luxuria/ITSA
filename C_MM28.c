#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        for (int i = 1; i <= x; i++)
        {
            if (i % 35 == 0 && i == 35)
                printf("%d", i);
            else if(i % 35 == 0)
                printf(" %d", i);
        }
        printf("\n");
    }
}