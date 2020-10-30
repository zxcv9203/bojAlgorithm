#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *up;
    int min;
    int ck;
    int ans;

    ans = 0;
    ck = 0;
    scanf("%d", &n);
    if(!(up = (int *)malloc(sizeof(int) * n)))
        return (0);
    scanf("%d", &up[0]);
    min = up[0];
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &up[i]);
        if(ck == 1)
        {
            min = up[i - 1];
            ck = 0;
        }
        if(up[i - 1] < up[i])
        {
            if(ans < up[i] - min)
                ans = up[i] - min;
        }
        else
        {
            ck = 1;
        }
    }
    printf("%d", ans);
    free(n);
}