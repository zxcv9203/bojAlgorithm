#include <stdio.h>

int eureka(int *tri, int k) {
	for (int i = 0; i < 45; i++)
	{
		for (int j = 0; j < 45; j++) 
		{
			for (int p = 0; p < 45; p++) 
			{
				if (tri[i] + tri[j] + tri[p] == k)
					return 1;
			}
		}
	}
	return 0;
}

int main(void)
{
    int t;
    int k;
    int tri[45];

    for (int i = 0; i < 45; i++)
		tri[i] = (i + 1) * (i + 2) / 2;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &k);
        printf("%d\n",eureka(tri, k));
    }
}