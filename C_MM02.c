#include <stdio.h>

int main()
{
    float bottom, height;
    while (scanf("%f %f ", &bottom, &height) != EOF)
    {
        printf("%.1f\n", bottom * height / 2);
    }
}