#include <stdio.h>

int main(void)
{
    int n;
    int sum;

    sum = 0;
    while(scanf("%d", &n) != EOF)
        sum += n;
    printf("%d", sum);
}