#include <stdio.h>

int main(void)
{
    int n;
    int bee;
    int i;

    bee = 1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        bee += i * 6;
        if(n <= bee)
            break ;
    }
    printf("%d", i + 1);
}