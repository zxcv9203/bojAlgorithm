#include <stdio.h>

int main(void)
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a == b && a == c && b == c)
        printf("%d",10000 + a * 1000);
    else if(a == b)
        printf("%d", 1000 + a * 100);
    else if(a == c)
        printf("%d", 1000 + a * 100);
    else if(b == c)
        printf("%d", 1000 + b * 100);
    else
    {
        if(a > b && a > c)
            printf("%d",a * 100);
        else if(b > c)
            printf("%d",b * 100);
        else
            printf("%d",c * 100);
        
    }
}