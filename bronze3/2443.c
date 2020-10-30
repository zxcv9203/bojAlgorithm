#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        for(int k = n - i; k < n; k++)
            printf(" ");
        for(int j = i * 2; j < 2 * n - 1; j++)
            printf("*");
        printf("\n");
    }
}