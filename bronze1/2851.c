#include <stdio.h>

int main(void)
{
    int n[10];
    int total;
    int mario;

    mario = 100;
    total = 0;
    for(int i = 0; i < 10; i++)
        scanf("%d", &n[i]);
    for(int i = 0; i < 10; i++)
    {
        if(mario - n[i] <= 0)
        {
            if(100 - total >= (100 - (total + n[i])) * -1)
            {
                total += n[i];
                break ;
            }
            else
                break ;
        }
        mario -= n[i];
        total += n[i];
    }
    printf("%d", total);
}

