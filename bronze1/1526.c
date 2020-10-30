#include <stdio.h>

int gms_ck(int n)
{
        

    while(n)
    {
        if(n % 10 != 4 && n % 10 != 7)
            return (0);
        n = n / 10;
    }
    return (1);
}
int main(void)
{
    int n;

    scanf("%d", &n);
    while(n)
    {
        if(gms_ck(n) == 1)
        {

            printf("%d", n);
            return (0);
        }
        n--;
    }
}