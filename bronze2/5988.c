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
    int n;
    char ck[100];
    int len;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", ck);
        len = ft_strlen(ck);
        if((ck[--len] - '0') % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
}