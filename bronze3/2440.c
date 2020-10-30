#include <stdio.h>

int main(void)
{
    int n;
    int j;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        j = i;
        while(j < n)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
}