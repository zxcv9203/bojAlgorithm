#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n - 1; i++)
    {
        if(i < n)
        {
            for(int j = 0; j < n - i - 1; j++)
                printf(" ");
            for(int k = 0; k <= i; k++)
                printf("*");
        }
        else
        {
            for(int j = n; j <= i; j++)
                printf(" ");
            for(int k = i; k <= 2 * n - 2; k++)
                printf("*");
        }
        printf("\n");        
    }
}