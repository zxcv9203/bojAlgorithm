#include <stdio.h>

int main(void)
{
    int a,b,c,d,p;
    int x,y;
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &p);

    x = a * p;
    if(p > c)
        y = (p - c) * d + b;
    else
        y = b;
    if(x <= y)
        printf("%d", x);
    else
        printf("%d", y);
    return (0);
}