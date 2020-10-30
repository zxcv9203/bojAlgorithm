#include <stdio.h>

int main(void)
{
    int n;
    int k;
    int a;
    int b;

    a = 1;
    b = 1;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++)
    {
        a *= n - i;
        b *= k - i;
    }
    printf("%d", a / b);
}