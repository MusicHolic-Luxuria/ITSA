#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        if (x == 1)
            printf("NO\n");
        if (x == 2)
            printf("YES\n");
        int flag = 1;
        for (int i = 2; i < x; ++i)
        {
            if (x % i == 0)
            {
                flag = 0;
                printf("NO\n");
                break;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
    }
}