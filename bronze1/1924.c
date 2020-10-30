#include <stdio.h>

int main(void)
{
    int m;
    int d;
    int n;
    char day[7][4] =
    {
        {"SUN"},
        {"MON"},
        {"TUE"},
        {"WED"},
        {"THU"},
        {"FRI"},
        {"SAT"}
    };
    
    n = 0;
    scanf("%d %d", &m, &d);
    for(int i = 1; i < m; i++)
    {
        if(i == 2)
            n += 28;
        else if(i == 8 || i == 10 || i == 12)
            n += 31;
        else if(i == 9 || i == 11)
            n += 30;
        else if(i % 2 != 0)
            n += 31;
        else
            n += 30;
    }
    n = (n + d) % 7;
    printf("%s",day[n]);
}
