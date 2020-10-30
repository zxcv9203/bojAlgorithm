#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i - 1);
}

int main(void)
{
    int n;
    char str[1000];
    int len;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        len = ft_strlen(str);
        printf("%c%c\n",str[0], str[len]);
    }
}