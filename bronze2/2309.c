#include <stdio.h>

int main(void)
{
    int small[9];
    int tmp;
    int total;
    int ck[2];

    total = 0;
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &small[i]);
        total += small[i];
    }
    for(int i = 0; i < 8; i++)
    {
        for(int j = i + 1; j < 9; j++)
        {
            if(small[i] > small[j])
            {
                tmp = small[i];
                small[i] = small[j];
                small[j] = tmp;
            }
        }
    }
    for(int i = 8; i > 0; i--)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            if(total - small[i] - small[j] == 100)
            {
                ck[0] = i;
                ck[1] = j;
                break ;
            }
        }
    }
    for(int i = 0; i < 9; i++)
    {
        if(i == ck[0] || i == ck[1])
            continue ;
        printf("%d\n", small[i]);
    }
}