#include <stdio.h>

int main(void)
{
    int n;
    int one;
    int two;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d", &one, &two);
        printf("Case %d: %d\n", i, one + two);
    }
}