#include <stdio.h>

int main(void)
{
    int menu[5];
    int min;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &menu[i]);
    }
    min = menu[0] + menu[3] - 50;
    for(int i = 0; i < 3; i++)
    {
        if(min >= menu[i] + menu[3] - 50)
            min = menu[i] + menu[3] - 50;
        if(min >= menu[i] + menu[4] - 50)
            min = menu[i] + menu[4] - 50;
    }
    printf("%d", min);
}