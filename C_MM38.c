#include <stdio.h>
#include <string.h>

int main()
{
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {
        if (x + y > z && y + z > x && z + x > y)
            printf("fit\n");
        else
            printf("unfit\n");
    }
}