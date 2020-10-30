#include <stdio.h>

int ft_reverse(int *src)
{
    int rev;
    int n;

    n = *src;
    rev = 0;
    while(n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return (rev);
}

int main(void)
{
    int x;
    int y;
    int ans;

    scanf("%d %d", &x, &y);
    ans = ft_reverse(&x) + ft_reverse(&y);
    printf("%d", ft_reverse(&ans));
}
