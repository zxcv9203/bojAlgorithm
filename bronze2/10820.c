#include <stdio.h>

int main()
{
	int low;
	int up;
	int n;
	int sp;
	char c;

	while (c != EOF) {
		low = 0;
		up = 0;
		n = 0;
		sp = 0;
		while (c != EOF) {
			c = getchar();
			if (c == '\n') 
				break;
			else if ('a' <= c && c <= 'z') 
				low++;
			else if ('A' <= c && c <= 'Z') 
				up++;
			else if ('0' <= c && c <= '9') 
				n++;
			else if (c == ' ') 
				sp++;
		}
		if(low + up + n + sp)
			printf("%d %d %d %d\n", low, up, n, sp);
	}

}
