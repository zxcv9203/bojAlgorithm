#include <stdio.h>

int main(void)
{
    int n;
    int div[10000];
    int total;
    int c;

    while(1)
    {
        c = 0;
        total = 0;
        scanf("%d", &n);
        if(n == -1)
            break ;
        for(int i = 1; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                div[c] = i;
                c++;
                total += i;
            }
        }
        if(total == n)
        {
            printf("%d =", total);
            for(int i = 0; i < c; i++)
            {
                printf(" %d ", div[i]);
                if(i < c - 1)
                    printf("+");
            }
        }
        else
            printf("%d is NOT perfect.", n);
        printf("\n");
    }
}