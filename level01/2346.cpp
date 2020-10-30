#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	int cur;
	int tmp;
	int i;
    vector<int> ballon;
	cur = 0;
	i = 0;
	scanf("%d", &n);
	vector<int> boom(n);

	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &tmp);
		ballon.push_back(tmp);
        boom[i - 1] = i;
	}

	while(n--)
    {
        printf("%d ", boom[cur]);
        tmp = ballon[cur];
        if(tmp > 0)
            tmp--;
        ballon.erase(ballon.begin() + cur);
        boom.erase(boom.begin() + cur);
        cur += tmp;
        if(!n)
            break ;
        if(cur < 0)
            cur = (n + cur) % n;
        else
            cur %= n;
    }
    return (0);
}
