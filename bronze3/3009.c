#include <stdio.h>

int main(void)
{
    int x[3];
    int y[3];

    for(int i = 0; i < 3; i++)
        scanf("%d %d", &x[i], &y[i]);
    if(x[0] != x[1] && x[0] != x[2])
        printf("%d ",x[0]);
    else if(x[1] != x[0] && x[1] != x[2])
        printf("%d ",x[1]);
    else
        printf("%d ",x[2]);
    
    if(y[0] != y[1] && y[0] != y[2])
        printf("%d",y[0]);
    else if(y[1] != y[0] && y[1] != y[2])
        printf("%d",y[1]);
    else
        printf("%d", y[2]);
}