#include <stdio.h>

int main(void)
{
    int boy;
    int girl;

    while(1)
    {
        scanf("%d %d", &boy, &girl);
        if(boy == 0 && girl == 0)
            break;
        printf("%d\n", boy + girl);
    }
}