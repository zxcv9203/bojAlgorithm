#include <stdio.h>

int main(void)
{
    int n;
    int cnt;

    scanf("%d", &n);
    cnt = 2;
    for(int i = 0; i < n; i++)
        cnt += cnt -1;
    printf("%d", cnt * cnt);

}