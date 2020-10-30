#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
int main(void)
{
    char jh[1000];
    char doc[1000];

    scanf("%s %s", jh, doc);
    if(ft_strlen(jh) < ft_strlen(doc))
        printf("no");
    else
        printf("go");
}