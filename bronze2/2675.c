#include <stdio.h>

int main(void)
{
    int t;
    int re;
    char str[21];
    int j;

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        j = 0;
        scanf("%d %s", &re, str);
        while(str[j])
        {
            for(int k = 0; k < re; k++)
                printf("%c",str[j]);
            j++;
        }
        printf("\n");
    }
}