#include <stdio.h>

void ft_reverse(char *str, int st, int ed)
{
    char tmp;

    while(st < ed)
    {
        tmp = str[st];
        str[st] = str[ed];
        str[ed] = tmp;
        st++;
        ed--;
    }
}

void ft_input(char *str)
{
    int st;
    int ed;

    st = 0;
    ed = 0;
    scanf("%[^\n]s", str);
    fgetc(stdin);
    while(str[st + 1])
    {
        if(str[ed] == ' ' || str[ed] == '\0')
        {
            ft_reverse(str, st, ed - 1);
            st = ed + 1;
        }
        ed++;
    }
}

int main(void)
{
    int n;
    char str[1001];
    
    scanf("%d", &n);
    fgetc(stdin);
    for(int i = 0; i < n; i++)
    {
        ft_input(str);
        printf("%s\n", str);
    }
}
