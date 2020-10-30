#include <stdio.h>

int main(void)
{
    int m, n;

    scanf("%d %d",&m, &n);
    if (1 <= m && m >= n)
    {
        printf("%d\n", m / n);
        printf("%d", m % n);
    }
    return (0);
}