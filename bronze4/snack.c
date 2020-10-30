#include <stdio.h>

int main(void)
{
    int k;
    int n;
    int m;

    scanf("%d %d %d",&k,&n,&m);

    if(k * n <= m)
        printf("%d", 0);
    else
        printf("%d", k * n - m);
}