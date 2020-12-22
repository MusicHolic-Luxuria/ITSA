#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
    int year, flag;  
    while (scanf("%d", &year) != EOF)  
    {  
        flag = 0;  
        if (year % 4 == 0)  
        {  
            flag = 1;  
            if (year % 100 == 0)  
            {  
                flag = 0;  
                if (year % 400 == 0)  
                {  
                    flag = 1;  
                }  
            }  
        }  
        if (flag == 0)  
        {  
            printf("Common Year\n");  
        }  
        else  
        {  
            printf("Bissextile Year\n");  
        }  
    }  
}  