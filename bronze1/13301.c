#include <stdio.h>

int main(void)
{
    int n;
    long long a;
    long long b;
    long long c;

    scanf("%d", &n);
    a = 0;
    b = 0;
    c = 1;
    for(int i = 0; i < n; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    
    printf("%lld", (a + b) * 2 + b * 2);
}