#include <stdio.h>

int main(void)
{
    int n;
    int k;
    int std[2][6] = {0, };
    int gen;
    int lev;
    int room;

    room = 0;
    scanf("%d %d", &n, &k);
    while(n)
    {
        scanf("%d %d", &gen, &lev);
        std[gen][lev - 1]++;
        n--;
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            while(std[i][j] > 0)
            {
                room++;
                std[i][j] -= k;
            }
        }
    }
    printf("%d", room);
}