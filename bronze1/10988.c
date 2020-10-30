#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i - 1);
}

int palindrome_ck(char *str)
{
    int len;
    int i;

    i = 0;
    len = ft_strlen(str);
    while(i < len)
    {
        if(str[i] != str[len])
            return (0);
        i++;
        len--;
    }
    return (1);
}

int main(void)
{
    char str[101];

    scanf("%s", str);
    printf("%d", palindrome_ck(str));
}