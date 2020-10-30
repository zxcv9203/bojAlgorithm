#include <stdio.h>

int main(void)
{
    int l,a,b,c,d;
    int cnt_a = 0, cnt_b = 0;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);

    while(a > 0)
    {
        cnt_a++;
        a -= c;
    }
    while(b > 0)
    {
        cnt_b++;
        b -= d;
    }
    if(cnt_a >= cnt_b)
        printf("%d", l - cnt_a);
    else
        printf("%d", l - cnt_b);
    
}