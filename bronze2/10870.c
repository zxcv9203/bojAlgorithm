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
    if(n == 0)
    {
        printf("0");
        return (0);
    }
    for(int i = 0; i < n - 2; i++)
    {
        a = b;
        b = c;
        c += a;       
    }
    printf("%d", c);
}