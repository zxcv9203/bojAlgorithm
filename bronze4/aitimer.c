#include <stdio.h>

int main(void)
{
    int h,m,s;
    int cook;

    scanf("%d %d %d %d",&h, &m, &s, &cook);

    s += cook;
    if(s >= 60)
        m = m + s / 60;
    if(m >= 60)
        h = h + m / 60;
    printf("%d %d %d",h % 24 , m % 60, s % 60);
}