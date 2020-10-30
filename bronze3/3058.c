#include <stdio.h>

int main(void)
{
    int t;
    int n;
    int min;
    int total;

    scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        total = 0;
        min = 100;
        for(int j = 0; j < 7; j++)
        {
            scanf("%d", &n);
            if(n % 2 == 0)
            {
                total += n;
                if(min > n)
                    min = n;
            }
        }
        printf("%d %d\n", total, min);
    } 
}