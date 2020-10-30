#include <stdio.h>

int ft_strlen(char *str)
{
    int n;

    n = 0;
    while(str[n])
        n++;
    return (n);
}
int main(void)
{
    int len;
    char bin[1000001];
    int trans;
    char eight[1000001];
    int n;

    scanf("%s", bin);
    len = ft_strlen(bin) - 1;
    n = 0;
    while(len >= 0)
    {
        trans = 0;
        for(int i = 0; i < 3; i++)
        {
            if(len == -1)
                break ;
            if(i == 0)
                trans += bin[len] - '0';
            if(i == 1)
                trans += (bin[len] - '0') * 2;
            if(i == 2)
                trans += (bin[len] - '0') * 4;
            len--;
        }
        eight[n] = trans + '0';
        n++;
    }
    while(--n >= 0)
        printf("%c", eight[n]);
}