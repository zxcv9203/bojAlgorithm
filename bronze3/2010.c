#include <stdio.h>

int main(void)
{
    int n;
    int plug;
    int total;
    scanf("%d",&n);
    total = -n + 1;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &plug);
        total += plug;
    }
    printf("%d",total);
}