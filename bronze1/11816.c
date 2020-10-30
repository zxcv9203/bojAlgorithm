#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int trans_hex(char *n)
{
    int len;
    int x;
    int i;

    x = 0;
    i = 1;
    len = ft_strlen(n);
    while(++i < len)
    {
        if(n[i] >= 'a' && n[i] <= 'f')
            x = x * 16 + (n[i] - 'a' + 10);
        else
            x = x * 16 + (n[i] - '0');
    }
    return (x);
}

int trans_eight(char *n)
{
    int len;
    int x;
    int i;

    x = 0;
    i = 0;
    len = ft_strlen(n);
    while(++i < len)
        x = x * 8 + (n[i] - '0');
    return (x);
}

int trans_ten(char *n)
{
    int len;
    int x;
    int i;

    x = 0;
    i = -1;
    len = ft_strlen(n);
    while(++i < len)
        x = x * 10 + (n[i] - '0');
    return (x);
}

int main(void)
{
    char n[100];
    int x;

    scanf("%s", n);
    if(n[0] == '0' && n[1] == 'x')
        x = trans_hex(n);
    else if(n[0] == '0')
        x = trans_eight(n);
    else
        x = trans_ten(n);
    printf("%d", x);
}