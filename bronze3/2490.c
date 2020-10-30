#include <stdio.h>
int main(void)
{
    int a[3];
    int b[3];
    int c[3];
    int d[3];
    for(int i = 0; i < 3; i++)
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    for(int i = 0; i < 3; i++)
    {
        if(a[i] + b[i] + c[i] + d[i] == 1)
            printf("C\n");
        else if(a[i] + b[i] + c[i] + d[i] == 2)
            printf("B\n");
        else if(a[i] + b[i] + c[i] + d[i] == 3)
            printf("A\n");
        else if(a[i] + b[i] + c[i] + d[i] == 4)
            printf("E\n");
        else
            printf("D\n");
    }

}