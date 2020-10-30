#include <stdio.h>

int main(void)
{
    int n;
    int sugar;
    int low;

    low = -1;
    scanf("%d", &n);
    sugar = n / 5;
    while(sugar >= 0)
    {
        if((n - (sugar * 5)) % 3 == 0)
        {
            low = (n - (sugar * 5)) / 3 + sugar;
            printf("%d", low);
            return (0);
        }
        sugar--;
    }
    printf("%d", low);
}