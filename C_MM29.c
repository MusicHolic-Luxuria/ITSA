#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        while (x--)
        {
            int flag = 1;
            for (int i = 2; i < x; ++i)
            {
                if (x % i == 0)
                {
                    flag = 0;
                    continue;
                }
            }
            if (flag == 1)
            {
                printf("%d\n", x);
                break;
            }
        }
    }
}