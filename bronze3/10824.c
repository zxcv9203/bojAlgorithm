#include <stdio.h>

void ft_strcat(char *src, char *dest)
{
    int st;
    int cp;

    st = 0;
    cp = 0;
    while(src[st])
        st++;
    while(dest[cp])
    {
        src[st] = dest[cp];
        st++;
        cp++;
    }
    src[st] = '\0';
}

long long ft_strsum(char *str_a, char *str_c)
{
    long long a;
    long long c;

    a = 0;
    c = 0;
    while(*str_a)
    {
        a = (*str_a - '0') + a * 10;
        str_a++;
    }
    while(*str_c)
    {
        c = (*str_c - '0') + c * 10;
        str_c++;
    }
    return (a + c);
}

int main(void)
{
    char a[20];
    char b[20];
    char c[20];
    char d[20];
    scanf("%s %s %s %s", a, b, c, d);

    ft_strcat(a,b);
    ft_strcat(c,d);
    printf("%llu",ft_strsum(a,c));

}