#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    if(n % 8 >= 1 && n % 8 <= 5){
		printf("%d", n % 8);
	} else if(n % 8 == 6){
		printf("%d", 4);
	} else if(n % 8 == 7){
		printf("%d", 3);
	} else if(n % 8 == 0){
		printf("%d", 2);
	} 
}