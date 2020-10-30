#include <stdio.h>

int main(void)
{
    int cnt[10] = {0, };
    int a;
    int b;
    int c;
    int total;

    scanf("%d %d %d", &a, &b, &c);
    total = a * b * c;
    while(total)
    {
        cnt[total % 10]++;
        total = total / 10;
    }
    for(int i = 0; i < 10; i++)
        printf("%d\n", cnt[i]);
}