#include <stdio.h>
int main(void)
{
    int n;
    int k;
    int cnt;

    cnt = 0;
    scanf("%d %d",&n ,&k);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cnt++;
        if(k == cnt)
        {
            printf("%d", i);
            return (0);
        }
    }
    printf("0");
}