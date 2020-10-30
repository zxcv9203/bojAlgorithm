#include <stdio.h>

int main(void)
{
    int joi[6];
    int min;
    int total;

    total = 0;
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &joi[i]);
        total += joi[i];
    }
    min = joi[0];
    for(int i = 1; i < 4; i++)
    {
        if(min > joi[i])
            min = joi[i];
    }
    total -= min;
    
    if(joi[4] < joi[5])
        total -= joi[4];
    else
        total -= joi[5];
    printf("%d",total);
    
}