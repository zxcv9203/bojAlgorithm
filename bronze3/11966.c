#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if(n == 1 || n == 2)
    {
        printf("1");
        return (0);
    }
    for(int a = 2; a <= n; a *= 2)
    {
        if(a == n)
        {
            printf("1");
            return (0);
        }
    }
    printf("0");
}