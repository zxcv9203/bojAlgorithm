#include <stdio.h>

int ft_sum(int k, int n)
{
    if(n == 1)
        return (1);
    if(k == 0)
        return (n);
    return (ft_sum((k - 1), n) + ft_sum(k, (n - 1)));
}
int main(void)
{
    int t;
    int k;
    int n;

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", ft_sum(k, n));
    }
}