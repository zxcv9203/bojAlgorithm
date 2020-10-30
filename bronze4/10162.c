#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int time;

    scanf("%d", &time);

    a = 0;
    b = 0;
    c = 0;
    if(time % 10 != 0)
    {
        printf("-1");
        return (0);
    }
    if(time / 300 != 0)
    {
        a = time / 300;
        time = time % (300 * a);
    }
    if(time / 60 != 0)
    {
        b = time / 60;
        time = time % (60 * b);
    }
    if(time / 10 != 0)
    {
        c = time / 10;
        time = time % (10 * c);
    }
    printf("%d %d %d",a,b,c);
}