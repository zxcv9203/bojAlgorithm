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
    for(int i = 0; i < n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d",c);
}