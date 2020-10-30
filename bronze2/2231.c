#include <stdio.h>

int main(void)
{
    int n;
    int mn;
    int len;
    int hap;
    int tmp;

    scanf("%d", &n);
    
    hap = 0;
    mn = n;
    len = 0;
    while(mn)
    {
        mn /= 10;
        len++;
    }
    mn = n - len * 9;
    while(mn < n)
    {
        tmp = mn;
        hap = mn;
        while(tmp)
        {
            hap += tmp % 10;
            tmp /= 10;
        }
        if(hap == n)
        {
            printf("%d", mn);
            return (0);
        }
        mn++;
    }
    printf("0");
}