#include <stdio.h>

int ft_strcalc(char *str)
{
    int n;
    n = 0;
    if(*str == ' ')
    {
        str++;
    }
    while(*str)
    {
        if(*str == ' ')
            n++;
        str++;     
    }
    str--;
    if(*str == ' ')
        n--;
    return (n);
}
int main(void)
{
    char str[1000001];
    int n;
    scanf("%[^\n]s", str);
    
    n = ft_strcalc(str);
    printf("%d\n", n + 1);
}