#include <stdio.h>

void find(int *small, int total)
{
    for(int i = 8; i >= 0; i--)
    {
        for(int j = 7; j >= 0; j--)
        {
            if(100 == total - (small[i] + small[j]))
            {
                small[i] = 0;
                small[j] = 0;
                return ;
            }
        }
    }
}

int main(void)
{
    int small[9];
    int total;

    total = 0;
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &small[i]);
        total += small[i];
    }
    find(small, total);
    for(int i = 0; i < 9; i++)
    {
        if(small[i] != 0)
            printf("%d\n", small[i]);
    }   
}