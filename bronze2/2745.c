#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i - 1);
}

int change(char cha)
{
    int n;
    if(cha >= 'A' && cha <= 'Z')
        n = (cha - 65) + 10;
    else
        n = cha - '0';
    return (n);  
}
int main(void)
{
    char n[100];
    int b;
    int size;
    int ans;
    int loca;

    ans = 0;
    loca = 1; 
    scanf("%s %d", n, &b);
    for(size = ft_strlen(n); size >= 0; size--)
    {
        ans += change(n[size]) * loca;
        loca *= b;
    }
    printf("%d", ans);
}