#include <stdio.h>

int main(void)
{
    int t;
    int n;
    int cnt;

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        cnt = 0;
        scanf("%d", &n);
        while(n > 0)
        {
            if(n % 2 == 1)
                printf("%d ", cnt);
            cnt++;
            n = n / 2;
        }
    }
}