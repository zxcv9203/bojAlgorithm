#include <stdio.h>

int main(void)
{
    int cy;
    int sd;
    int n;
    int cy_dice;
    int sd_dice;

    scanf("%d", &n);
    cy = 100;
    sd = 100;
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &cy_dice, &sd_dice);
        if(cy_dice > sd_dice)
            sd -= cy_dice;
        else if(sd_dice > cy_dice)
            cy -= sd_dice;
    }
    printf("%d %d", cy, sd);
}