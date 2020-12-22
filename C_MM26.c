#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        for (int i = 1; i <= x; i++)
        {
            printf("%d*%d=%d\n", i, i, i * i);
        }
    }
}