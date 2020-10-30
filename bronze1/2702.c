#include <stdio.h>

int common_divisor(int a, int b)
{
    int i;

    if(a < b)
    {
        i = a;
        while(i)
        {
            if(a % i == 0 && b % i == 0)
                return (i);
            i--;
        }
    }
    else
    {
        i = b;
        while(i)
        {
            if(a % i == 0 && b % i == 0)
                return (i);
            i--;
        }
    }
    return (0);
}

int main(void)
{
    int n;
    int a;
    int b;
    int max;
    int min;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        max = common_divisor(a, b);
        min = a * b / max;
        printf("%d %d\n", min, max);
    }
}