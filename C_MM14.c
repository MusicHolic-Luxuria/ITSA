#include <math.h>
#include <stdio.h>

int main()
{
    long long int time, day, hour, min, sec;
    while (scanf("%lld", &time) != EOF)
    {
        sec = time % 60;
        time = time / 60;
        min = time % 60;
        time = time / 60;
        hour = time % 24;
        time = time / 24;
        day = time;
        printf("%lld days\n", day);
        printf("%lld hours\n", hour);
        printf("%lld minutes\n", min);
        printf("%lld seconds\n", sec);
    }
}