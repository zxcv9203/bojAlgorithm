#include <stdio.h>

int main(void)
{
    long long n;
    long long total;

    total = 0;
    scanf("%lld", &n);
    for(long long i = 1; i < n; i++)
        total += (n + 1) * i;
    printf("%lld", total);
}

