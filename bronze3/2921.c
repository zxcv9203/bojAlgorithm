#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    n = (n * (n + 1) * (n + 2)) / 2;
    printf("%d", n);
}