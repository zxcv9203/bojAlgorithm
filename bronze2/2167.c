#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int m;
    int arr[301][301];
    int t;
    int st[2];
    int ed[2];
    int *ans;

    scanf("%d %d", &n, &m);
    /*if(!(arr = (int **)malloc(sizeof(int *) * n)))
        return (0);
    for(int i = 0; i < m; i++)
    {
        if(!(arr[i] = (int *)malloc(sizeof(int) * m)))
            return (0);
    }*/
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &t);
    if(!(ans = (int *)malloc(sizeof(int) * t)))
        return (0);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &st[0], &st[1], &ed[0], &ed[1]);
        for(int k = st[0] - 1; k < ed[0]; k++)
        { 
            for(int l = st[1] - 1; l < ed[1]; l++)
                ans[i] += arr[k][l];
        }
        printf("%d\n", ans[i]);
    }
    free(ans);
    /*for(int i = 0; i < m; i++)
        free(arr[i]);
    free(arr);*/
}