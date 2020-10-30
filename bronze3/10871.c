#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,x;
    int *a;
    scanf("%d %d",&n, &x);

    a = (int *)malloc(sizeof(int)* n);

    for(int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for(int i = 0; i< n; i++)
    {
        if(a[i] < x)
            printf("%d ",a[i]);
    }
}