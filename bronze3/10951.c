#include <stdio.h>

int main(void)
{
    int a;
    int b;

    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a + b);
}