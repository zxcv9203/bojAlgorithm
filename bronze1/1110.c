#include <stdio.h>

int main(void)
{
    int n;
    int cnt;
    int tmp;
    int sum;

    cnt = 0;
    scanf("%d", &n);
    tmp = n;
    while(1)
    {
        if(tmp / 10 == 0)
        {
            tmp *= 10;
            sum = tmp / 10 + tmp % 10;
            tmp = (tmp / 10) * 10 + sum % 10;
            cnt++;
        }
        else
        {
            sum = tmp / 10 + tmp % 10;
            tmp = (tmp % 10) * 10 + sum % 10;
            cnt++;
        }
        if(tmp == n)
        {
            printf("%d", cnt);
            break ;
        }
    }
    
}