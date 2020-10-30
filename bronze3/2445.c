#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= i; j++)
            printf("*");
        for(int k = i + 1; k <= 2 * n - i; k++)
            printf(" ");
        for(int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
            printf("*");
        for(int k = i + 1; k <= 2 * n - i; k++)
            printf(" ");
        for(int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
