#include <stdio.h>

void ft_swap(int *card, int st, int ed)
{
    int tmp;

    while(st < ed)
    {
        tmp = card[st];
        card[st] = card[ed];
        card[ed] = tmp;
        st++;
        ed--;
    }
}

int main(void)
{
    int card[20];
    int swp[2];

    for(int i = 0; i < 20; i++)
        card[i] = i + 1;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d %d", &swp[0], &swp[1]);
        ft_swap(card, swp[0] - 1, swp[1] - 1);
    }
    for(int i = 0; i < 20; i++)
    {
        printf("%d", card[i]);
        if(i < 19)
            printf(" ");
    }
}