#include<stdio.h>   

int main() {
	char a[101];

	while (fgets(a, 100, stdin))
		printf("%s", a);
}