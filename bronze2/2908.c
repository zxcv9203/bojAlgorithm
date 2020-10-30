#include <stdio.h>

int main(void)
{
    char a[4];
    char b[4];
    int ra;
    int rb;
    int loca;

    loca = 100;
    ra = 0;
    rb = 0;
    scanf("%s %s", a, b);
    for(int i = 2; i >= 0; i--)
    {
        ra += (a[i] - '0') * loca;
        rb += (b[i] - '0') * loca;
        loca /= 10;
    }
    if(ra < rb)
        printf("%d", rb);
    else
        printf("%d", ra);
}