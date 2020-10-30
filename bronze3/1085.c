#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int w;
    int h;
    scanf("%d %d %d %d",&x,&y,&w,&h);

    w -= x;
    h -= y;
    if(w < h && w < x && w < y)
        printf("%d",w);
    else if(h < w && h < y && h <x)
        printf("%d",h);
    else if(x < w && x < h && x < y)
        printf("%d",x);
    else
        printf("%d",y);
}