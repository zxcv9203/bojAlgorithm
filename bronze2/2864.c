#include <stdio.h>

int atoi(char *str)
{
    int len;
    int n;
    int cnt;

    len = 0;
    n = 0;
    cnt = 1;
    while(str[len])
        len++;
    while(--len >= 0)
    {
        n += (str[len] - '0') * cnt;
        cnt *= 10;
    }
    return (n);
}
int main(void)
{
    char a[8];
    char b[8];
    int min;
    int max;
    scanf("%s %s", a, b);

    max = min;
    for(int i = 0; a[i]; i++)
    {
        if(a[i] == '5')
            a[i] = '6';
    }
    for(int i = 0; b[i]; i++)
    {
        if(b[i] == '5')
        {
            b[i] = '6';
        }
    }
    max = atoi(a) + atoi(b);
    for(int i = 0; a[i]; i++)
    {
        if(a[i] == '6')
            a[i] = '5';
    }
    for(int i = 0; b[i]; i++)
    {
        if(b[i] == '6')
            b[i] = '5';
    }
    min = atoi(a) + atoi(b);
    printf("%d %d", min, max);
}