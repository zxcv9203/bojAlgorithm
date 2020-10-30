#include <stdio.h>

int main(void)
{
    int da[8];
    int asc;
    int desc;

    asc = 1;
    desc = 8;
    for(int i = 0; i < 8; i++)
        scanf("%d", &da[i]);
    if(da[0] == asc)
    {
        for(int i = 0; i < 8; i++)
        {
            if(da[i] != asc)
            {
                printf("mixed");
                return (0);
            }
            asc++;
        }
        printf("ascending");
    }
    else if(da[0] == desc)
    {
        for(int i = 0; i < 8; i++)
        {
            if(da[i] != desc)
            {
                printf("mixed");
                return (0);
            }
            desc--;
        }
        printf("descending");
    }
    else
        printf("mixed");
}