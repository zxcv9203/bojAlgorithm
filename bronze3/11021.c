#include <stdio.h>

int main(void)
{
    int cnt;
    int a;
    int b;

    scanf("%d",&cnt);
    for(int i = 1; i <= cnt; i++)
    {
        scanf("%d %d",&a, &b);
        printf("Case #%d: %d\n",i , a + b);
    }
}