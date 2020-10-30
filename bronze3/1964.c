#include <stdio.h>

int main(void)
{
	long long  n;
	long long sum;
	scanf("%lld", &n);
	sum = ((3 * n*n) + (5 * n) + 2) / 2;
	printf("%lld\n", sum % 45678);
}
