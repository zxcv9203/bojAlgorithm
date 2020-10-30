#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}

int ft_strcmp(char *src, char *dest)
{
    int i;

    i = 0;
    while(src[i] || dest[i])
    {
        if(src[i] != dest[i])
            return (0);
        i++;
    }
    return (1);
}
int main(void)
{
    char str[501];
    int len;
    while(1)
    {
        fgets(str, 500, stdin);
        len = ft_strlen(str);
        str[--len] = '\0';
        if(ft_strcmp(str, "END"))
            break ;
        while(--len >= 0)
            printf("%c", str[len]);
        printf("\n");
    }
}