#include <stdio.h>

int main(void)
{
    int fx[100][100] = {0, };
    int a[4];
    int cnt;

    cnt = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            scanf("%d", &a[j]);
        for(int k = a[0]; k < a[2]; k++) {
			for(int l = a[1]; l < a[3]; l++) {
				if(fx[k][l] == 0) {
					cnt++;
					fx[k][l]++;
				}
			}
		}
	}
	printf("%d", cnt);
}