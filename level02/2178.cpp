#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int n;
int m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
bool visit[100][100];
int map[100][100] = {0, };
int cnt[100][100] = {0, };

struct info
{
    int x;
    int y;
};

void ft_bfs(int x, int y)
{
    queue<info> q;
    info t;

    visit[x][y] = true;
    cnt[x][y] = 1;
    t = {x, y};
    q.push(t);
    while(!q.empty())
    {
        t = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int nx = t.x + dx[i];
            int ny = t.y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue ;
            if(map[nx][ny] && !visit[nx][ny])
            {
                visit[nx][ny] = true;
                q.push({nx, ny});
                cnt[nx][ny] = cnt[t.x][t.y] + 1;
            }
        }
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }
    ft_bfs(0, 0);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", map[i][j]);
        puts("");
    }
    printf("%d", cnt[n - 1][m - 1]);
}
