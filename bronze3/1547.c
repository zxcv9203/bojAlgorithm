#include <stdio.h>

int main(void)
{
    int m;
    int cup[3] = {0, };
    int ch1;
    int ch2;
    int tmp;

    cup[0] = 1;
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &ch1, &ch2);
        tmp = cup[--ch1];
        cup[ch1] = cup[--ch2];
        cup[ch2] = tmp;
    }
    for(int i = 0; i < 3; i++)
    {
        if(cup[i] == 1)
        {
            printf("%d",i + 1);
            return (0);
        }
    }
    printf("-1");
}