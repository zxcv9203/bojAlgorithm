#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n, a, b, c;
    c = 0;
    scanf("%d", &n);
    
    if(n == 2)
    	scanf("%d %d", &a, &b);
    else
    	scanf("%d %d %d", &a, &b, &c);
    	
    for(int i = 1; i <= a; i++)
    {
    	if(a % i == 0 && b % i == 0 && c % i == 0)
            printf("%d\n", i);
    }
}