#include <stdio.h>

int main(void)
{
    int n;
    int c;
    int result[4] = {0, };

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        result[0] = c / 25;
        c %= 25;
        result[1] = c / 10;
        c %= 10;
        result[2] = c / 5;
        c %= 5;
        result[3] = c / 1;
        printf("%d %d %d %d\n", result[0], result[1], result[2], result[3]);
    }
}