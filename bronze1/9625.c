#include <stdio.h>

int main(void)
{
    int n;
    int a;
    int b;
    int c;

    a = 0;
    b = 1;
    c = 1;
    scanf("%d", &n);
    for(int i = 1; i < n; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    printf("%d %d", a, b);
}
