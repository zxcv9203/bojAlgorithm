#include <stdio.h>

int main(void)
{
    int n;
    int std;
    int cnt;

    cnt = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &std);
        if(std != i)
            cnt++;
    }
    printf("%d", cnt);
}