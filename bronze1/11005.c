#include <stdio.h>

void ft_base(int n, int dec)
{
    char hex[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if(n > 0)
    {
        ft_base(n / dec, dec);
        printf("%c",hex[n % dec]);
    }
}

int main(void)
{
    int n;
    int dec;

    scanf("%d %d", &n, &dec);
    ft_base(n, dec);
}