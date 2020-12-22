#include <stdio.h>  
  
int main()  
{  
    float top, bottom, height;  
    while (scanf("%f %f %f", &top, &bottom, &height) != EOF)  
    {  
        printf("Trapezoid area:%.1f\n", (top + bottom) * height / 2);  
    }  
}  