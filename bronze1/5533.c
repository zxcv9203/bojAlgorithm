#include <stdio.h>

int main(void)
{
    int n;
    int player[200][3];
    int cnt;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d %d %d", &player[i][0],  &player[i][1],  &player[i][2]);
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            cnt = 0;
            for(int k = i + 1; k < n; k++)
            {
                if(player[i][j] == player[k][j])
                {
                    player[k][j] = 0;
                    cnt++;
                }
            }
            if(cnt)
                player[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d\n", player[i][0] + player[i][1] + player[i][2]);
}