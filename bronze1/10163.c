#include <stdio.h>

int main(void)
{
    int floor[101][101] = {0, };
    int cnt[101] = {0, };
    int n;
    int a;
    int b;
    int c;
    int d;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        for(int j = a; j < a + c; j++)
        {
            for(int k = b; k < b + d; k++)
                floor[j][k] = i;
        }
        
    }
    for(int i = 0; i <= 100; i++)
    {
        for(int j = 0; j <= 100; j++)
            cnt[floor[i][j]]++;
    }
    for(int i = 1; i <= n; i++)
        printf("%d\n", cnt[i]);
}