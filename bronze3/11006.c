#include <stdio.h>

int main(void)
{
    int n;
    int all;
    int chicken;
    int t;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &all, &chicken);
        t = all - chicken;
        printf("%d %d\n", chicken - t, t);
    }
}