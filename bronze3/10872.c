#include <stdio.h>

int ft_factorial(int n)
{
    if(n == 0)
        return (1);
    if(n == 1)
        return (n);
    return n * ft_factorial(n - 1);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d",ft_factorial(n));
}