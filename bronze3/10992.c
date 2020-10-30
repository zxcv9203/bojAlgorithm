#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int k = 0; k < n - i; k++)
            printf(" ");
        for(int j = 1; j < i * 2; j++)
        {
            if(i == n)
                printf("*");
            else if(j == 1)
                printf("*");
            else if(j == i * 2 - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}