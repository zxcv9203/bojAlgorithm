#include <stdio.h>

int main(void)
{
    int t;
    int n;
    int num;
    int total;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        total = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            total += num;
        }
        printf("%d\n", total);
    }
}