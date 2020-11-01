#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int s;
int k[13];
int lotto[6];

void perm(int n, int idx)
{
	if(idx + 6 == s)
		return ;
	if(n == 6)
	{
		for(int i = 0; i < 6; i++)
			printf("%d ", lotto[i]);
		puts("");
	}
	for(int i = idx; i < 6; i++)
	{
		lotto[n] = k[i];
		perm(n + 1, idx + 1);
	}
}

int main(void)
{
	 while(1)
	 {
	 	scanf("%d", &s);
	 	if (!s)
	 		break ;
	 	for(int i = 0; i < s; i++)
	 		scanf("%d", &k[i]);
	 	perm(0, 0);
	 	memset(k, 0, sizeof(k));
	 }

}
