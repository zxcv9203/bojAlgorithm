#include <stdio.h>

int main(void)
{
    int n;
    int t;
    int k;
    int candy;
    int party;

    scanf("%d", &n);
    party = 0;
    for(int i = 0; i < n; i++)
    {
        party = 0;
        scanf("%d %d", &t, &k);
        for(int j = 0; j < t; j++)
        {
            scanf("%d", &candy);
            party += candy / k;
        }
        printf("%d\n", party);
    }
}