#include <stdio.h>

int main(void)
{
    int n[9];
    int max;
    int loca;

    for(int i = 0; i < 9; i++)
        scanf("%d", &n[i]);
    max = n[0];
    loca = 0;
    for(int i = 0; i < 9; i++)
    {
        if(max < n[i])
        {
            loca = i;
            max = n[i];
        }
    }
    printf("%d\n%d", max, loca + 1);
}