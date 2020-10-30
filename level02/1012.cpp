#include <cstdio>
#include <cstring>
using namespace std;

bool field[50][50];
bool visit[50][50];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int m;
int n;

void ft_dfs(int x, int y)
{
    int nx;
    int ny;

    for(int i = 0; i < 4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= n || ny >= m)
            continue;
        if(field[nx][ny] && !visit[nx][ny])
        {
            visit[nx][ny] = true;
            ft_dfs(nx, ny);
        }
    }

}

int main(void)
{
    int t;
    int k;
    int x;
    int y;
    int cnt;

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        cnt = 0;
        memset(field, false, sizeof(field));
        memset(visit, false, sizeof(visit));
        scanf("%d %d %d", &n, &m, &k);
        for(int j = 0; j < k; j++)
        {
            scanf("%d %d", &x, &y);
            field[x][y] = true;
        }
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                if(field[j][k] && !visit[j][k])
                {
                    cnt++;
                    visit[j][k] = true;
                    ft_dfs(j,k);
                }
            }
        }
        printf("%d\n", cnt);
    }
}
