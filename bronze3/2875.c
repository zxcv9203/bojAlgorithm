#include <stdio.h>

int main(void) {

    int n;
    int m;
    int k;
    int limit;
    int i;
    scanf("%d %d %d", &n, &m, &k);

    limit = n + m - k;
    n /= 2;
    i = 1;
    while(1) {
        if (i + i*2 > limit || 0 >= n || 0 >= m) 
            break;
        n--;
        m--;
        i++;
    }

    printf("%d\n", i - 1);
}