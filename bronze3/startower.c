#include <stdio.h>

int main(void)
{
    int n;
    int i,j;
    scanf("%d", &n);
    i = 0,j = n;
    
 while(j > 0)
    {
        i = 0;
        while(++i <= n)
        {
            if(j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        j--;
    }

}