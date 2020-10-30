#include <stdio.h>

int main(void)
{
    int std[28];
    int ck;

    for(int i = 0; i < 28; i++)
        scanf("%d", &std[i]);
    for(int i = 1; i <= 30; i++)
    {
        ck = 0;
        for(int j = 0; j < 28; j++)
        {
            if(std[j] == i)
            {
                ck = 1;
                break ;
            }
        }
        if(ck == 0)
            printf("%d\n", i);
    }
}