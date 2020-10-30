#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    queue<int> q;
    int size;
    int tmp;
    int cnt;
    int ans;
    vector<int> v;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        cnt = 0;
        scanf("%d %d", &size, &ans);
        for(int j = 0; j < size; j++)
        {
            scanf("%d", &tmp);
            q.push(tmp);
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        tmp = v.size() - 1;
        while(!q.empty())
        {
            if(v[tmp] == q.front())
            {
                cnt++;
                if(ans == 0)
                    break ;
                q.pop();
                tmp--;
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
            ans--;
            if(ans < 0)
                ans += q.size();
        }
        printf("%d\n", cnt);
        while(!q.empty())
            q.pop();
        while(!v.empty())
            v.pop_back();
    }
}
