#include <stdio.h>

int main(void)
{
    int n;
    int square;

    scanf("%d", &n);
    square = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; i * j <= n; j++)
            square++;
    }
    printf("%d", square);
}