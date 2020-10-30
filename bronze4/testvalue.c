#include <stdio.h>

int main(void)
{
    int value[8];
    int mk;
    int ms;

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &value[i]);
    }

    mk = 0;
    ms = 0;
    for(int i = 0; i < 8; i++)
    {
        if(i < 4)
            mk += value[i];
        else
            ms += value[i];
    }
    if(mk >= ms)
        printf("%d", mk);
    else
        printf("%d", ms);
    
}