#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        int top = x;
        for (; top; top--)
        {
            if (top % 3 == 0)
            {
                break;
            }
        }
        int height = top / 3 + 1; //高有0這個數所以+1
        printf("%d\n", top * height / 2);
    }
}