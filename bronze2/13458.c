#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *a;
    int b;
    int c;
    long long cnt;

    cnt = 0;
    scanf("%d", &n);
    if(!(a = (int *)malloc(sizeof(int) * n)))
        return (0);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d %d", &b, &c);
    for(int i = 0; i < n; i++)
    {
        a[i] -= b;
        cnt++;
        if(a[i] > 0)
        {
            if(a[i] % c != 0)
                cnt++;
            cnt += a[i] / c;
        }
    }
    printf("%lld", cnt);
    free(a);
}