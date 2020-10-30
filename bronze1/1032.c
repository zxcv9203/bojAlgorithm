#include <stdio.h>

void ft_strfind(char *str, char *input)
{
    int i;

    i = 0;
    while(str[i] || input[i])
    {
        if(str[i] != input[i])
            str[i] = '?';
        i++;
    }
    str[i] = '\0';
}

int main(void)
{
    int n;
    char str[51];
    char input[51];
    int sw;

    sw = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        if(sw)
        {
            scanf("%s", str);
            sw = 0;
        }
        else
        {
            scanf("%s", input);
            ft_strfind(str, input);
        }
    }
    printf("%s", str);
}