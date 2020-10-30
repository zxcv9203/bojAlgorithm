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
        for(int j = 1; j <= n; j++)
        {
            if(j * j <= n)
                cnt++;
        }
        printf("%d\n", cnt);        
    }
}