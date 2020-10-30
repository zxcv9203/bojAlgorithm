#include <stdio.h>

int main(void)
{
    int fir[100][100];
    int sec[100][100];
    int ans[100][100];
    int n;
    int m;
    int k;

    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            scanf("%d", &fir[i][j]);
    }
    scanf("%d %d", &m, &k);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &sec[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            for(int l = 0; l < m; l++)
            {
                ans[i][j] += fir[i][l] * sec[l][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d", ans[i][j]);
            if (j < k -1)
                printf(" ");
        }
        printf("\n");
    }
}
