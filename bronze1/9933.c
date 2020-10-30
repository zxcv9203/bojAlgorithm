#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int ft_reversecmp(char *src, char *dest)
{
    int slen;
    int dlen;
    char center;

    slen = 0;
    dlen = ft_strlen(dest);
    while(slen != --dlen)
    {
        if(src[slen] != dest[dlen])
            return (0);
        slen++;
    }
    center = src[slen];
    return (center);
}

int main(void)
{
    int n;
    char str[100][15];
    char center;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
         scanf("%s", str[i]);
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if((center = ft_reversecmp(str[i], str[j])) != 0)
            {
                printf("%d %c", ft_strlen(str[i]), center);
                return (0);
            }
        }
    }
}