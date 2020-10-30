#include <stdio.h>

int main(void)
{
    int n;
    int s;
    int opt;
    int q;
    int p;
    int total;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &s, &opt);
        total = s;
        for(int j = 0; j < opt; j++)
        {
            scanf("%d %d", &q, &p);
            total += q*p;
        }
        printf("%d\n", total);
    }
}