#include <stdio.h>

int main(void)
{

	int n;
    int a;
    int temp;
    int b;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		temp = a;
		for (int j = 1; j < b; j++)
		{
			a = a * temp % 10;
		}
		if (a % 10 == 0)
			printf("%d\n",10);
		else
		    printf("%d\n", a % 10);
	}
}