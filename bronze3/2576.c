#include <stdio.h>

int main(void)
{
    int n;
    int min;
    int total;

    total = 0;
    min = 100;
    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &n);
        if(n % 2 != 0)
        {
            total += n;
            if(n < min)
                min = n;
        }
    }
    if(total == 0)
        printf("-1");
    else
        printf("%d\n%d", total, min);
    
}