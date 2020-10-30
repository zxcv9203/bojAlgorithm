#include <stdio.h>

int self_number(int n)
{
    int total;

    total = n;
    while(n)
    {
        total += n % 10;
        n /= 10;
    }
    return (total);
}
int main(void)
{
    int i;
    int n[10035] = {0, };
    
    i = 1;
    while(i < 10000)
    {
        n[self_number(i)] = 1;
        if(n[i] == 0)
            printf("%d\n", i);
        i++;
    }
}