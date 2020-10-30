#include <stdio.h>

int main(void)
{
    int t;
    int m;
    int n;
    int box[100][100];
    int dis;

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        dis = 0;
        scanf("%d %d", &m, &n);
        for(int j = 0; j < m; j++)
        {
            for(int k = 0; k < n; k++)
            {
                scanf("%d", &box[j][k]);
                if(j != 0)
                {
                    if(box[j][k] == 0)
                    for(int l = j; l >= 0; l--)
                    {
                        if(box[l][k] == 1)
                            dis++;
                    }
                }
            }
        }
        printf("%d\n", dis);
    }
}
