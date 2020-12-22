#include <math.h>  
#include <stdio.h>  
  
int main()  
{  
    int x, y;  
    while (scanf("%d %d", &x, &y) != EOF)  
    {  
        printf("%d+%d=%d\n", x, y, x + y);  
        printf("%d*%d=%d\n", x, y, x * y);  
        printf("%d-%d=%d\n", x, y, x - y);  
        if (x % y >= 0) //處理 x<0 and y<0 的情況  
        {  
            printf("%d/%d=%d...%d\n", x, y, x / y, x % y);  
        }  
        else  
        {  
            if (y > 0)  
                printf("%d/%d=%d...%d\n", x, y, (x / y) - 1, (x % y) + abs(y));  
            else  
                printf("%d/%d=%d...%d\n", x, y, (x / y) + 1, (x % y) + abs(y));  
        }  
    }  
} 