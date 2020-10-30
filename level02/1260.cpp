#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

    bool map[1001][1001];
    bool visit[1001];

    int n;
    int m;
    int v;

void ft_dfs(int node)
{
    printf("%d ", node);

    for(int i = 1; i <= n; i++)
    {
        if(map[node][i] && !visit[i])
        {
            visit[i] = true;
            ft_dfs(i);
        }
    }
}

void ft_bfs()
{
    queue<int> q;

    q.push(v);
    visit[v] = 1;
    while (!q.empty())
    {
        v = q.front();
        q.pop();
        printf("%d ", v);
        for(int i = 1; i <= n; i++)
        {
            if(map[v][i] && !visit[i])
            {
                visit[i] = true;
                q.push(i);
            }
        }
    }
}

int main(void)
{
    int st;
    int ed;

    scanf("%d %d %d", &n, &m, &v);
    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &st, &ed);
        map[st][ed] = true;
        map[ed][st] = true;
    }
    visit[v] = true;
    ft_dfs(v);
    puts("");
    memset(visit, false, 1001);
    ft_bfs();
    puts("");
}
