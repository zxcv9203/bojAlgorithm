#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int k = i; k <= n - 1; k++)
            printf(" ");
        for(int j = 1; j <= i * 2; j++)
        {
            if(j % 2 != 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}