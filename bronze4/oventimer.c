#include <stdio.h>

int main(void)
{
    int h,m;
    int cook;

    scanf("%d %d %d",&h, &m, &cook);

    m += cook;

    if(m >= 60)
    {
        h = h + m / 60;
        m = m % 60;
    }
    if(h >= 24)
    {
        h = h - 24;
    }
    printf("%d %d",h , m);
}