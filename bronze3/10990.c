#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = i ; j < n - 1; j++)
            printf(" ");
        for(int k = 0; k < i * 2 + 1; k++)
        {
            if(k == 0)
                printf("*");
            else if(k == i * 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}