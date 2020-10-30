#include <stdio.h>

int main(void)
{
    int l, p;
    int a[5];
    scanf("%d %d",&l,&p);
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i =0; i < 5; i++)
    {
        printf("%d", a[i] - l*p);
        if(i < 4)
            printf(" ");
    }
    
}