#include <math.h>
#include <stdio.h>

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x > 100 || y > 100)
            printf("outside\n");
        else
            printf("inside\n");
    }
}