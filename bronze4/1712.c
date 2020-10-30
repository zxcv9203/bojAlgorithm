#include <stdio.h>

int main(void)
{
    long long a;
    long long b;
    long long c;
    long long bep;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    if(b >= c)
        printf("-1");
    else
    {
        bep = a / (c - b);
        printf("%lld",bep + 1);
    }
}