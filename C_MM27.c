#include <math.h>
#include <stdio.h>

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        printf("%d\n", (x + y) * (abs(x - y) + 1) / 2);
    }
}