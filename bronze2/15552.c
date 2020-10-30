#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int n;
    scanf("%d", &n);
    while(n)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        n--;
    }
}