#include <stdio.h>

int main(void)
{
    int d;
    int car[5];
    int ck;

    ck = 0;
    scanf("%d", &d);
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &car[i]);
        if(car[i] == d)
            ck++;
    }
    printf("%d",ck);   
}