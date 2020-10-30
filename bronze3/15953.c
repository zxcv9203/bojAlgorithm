#include <stdio.h>

int main(void)
{
    int n;
    int a;
    int b;
    int total;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        total = 0;
        scanf("%d %d", &a, &b);
        if(a == 0)
            total += 0;
        else if(a == 1)
            total += 5000000;
        else if(a <= 3)
            total += 3000000;
        else if(a <= 6)
            total += 2000000;
        else if(a <= 10)
            total += 500000;
        else if(a <= 15)
            total += 300000;
        else if(a <= 21)
            total += 100000;
        if(b == 0)
            total += 0;
        else if(b == 1)
            total += 5120000;
        else if(b <= 3)
            total += 2560000;
        else if(b <= 7)
            total += 1280000;
        else if(b <= 15)
            total += 640000;
        else if(b <= 31)
            total += 320000;
        printf("%d\n", total);
    }
}