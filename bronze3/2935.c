#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
char *ft_plus(char *a, char *b)
{
    int size_a;
    int size_b;

    size_a = ft_strlen(a);
    size_b = ft_strlen(b);
    if(size_a > size_b)
    {
        a[size_a - size_b] = '1';
        return (a);
    }
    else if(size_a < size_b)
    {
        b[size_b - size_a] = '1';
        return (b);
    }
    else
    {
        a[0] = '2';  
        return (a);
    }
}
char *ft_multiple(char *a, char *b)
{
    int size_a;
    int size_b;
    int tmp;

    size_a = ft_strlen(a);
    size_b = ft_strlen(b);
    if(size_a > size_b)
    {
        tmp = size_b - 1;
        for(int i = 0; i < tmp; i++)
        {
            a[size_a] = '0';
            size_a++;
        }
        a[size_a] = '\0';
        return (a);
    }
    else if(size_a < size_b)
    {
        tmp = size_a - 1;
        for(int i = 0; i < tmp; i++)
        {
            b[size_b] = '0';
            size_b++;
        }
        a[size_b] = '\0';
        return (b);
    } 
    else
    {
        tmp = size_a - 1;
        for(int i = 0; i < tmp; i++)
        {
            a[size_a] = '0';
            size_a++;
        }
        a[size_a] = '\0';
        return (a);
    }
    
}
int main(void)
{
    char a[1001];
    char b[1001];
    char oper;

    scanf("%s %c %s", a, &oper, b);
    if(oper == '+')
        printf("%s", ft_plus(a, b));
    else if(oper == '*')
        printf("%s", ft_multiple(a, b));
    return (0);
}