#include <stdio.h>

int ft_strlen(char *n)
{
    int i;

    i = 0;
    while(n[i])
        i++;
    return (i - 1);
}
int ft_peln(char *n)
{
    int st;
    int ed;

    st = 0;
    ed = ft_strlen(n);
    while(st < ed)
    {
        if(n[st] != n[ed])
            return (0);
        st++;
        ed--;
    }
    return (1);
}
int main(void)
{
    char n[6];
    int ck;

    while(1)
    {
        scanf("%s", n);
        if(n[0] == '0')
            break ;
        ck = ft_peln(n);
        if(ck)
            printf("yes\n");
        else
            printf("no\n");
    }
}