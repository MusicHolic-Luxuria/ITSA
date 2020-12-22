#include <math.h>
#include <stdio.h>

int main()
{
    double distance;
    while (scanf("%lf", &distance) != EOF)
    {
        printf("%d\n", (int)ceil(distance / (1 - (30 * 0.0254))));
    }
}