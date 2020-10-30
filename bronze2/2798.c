#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int m;
    int *card;
    int sim;
    int bjack;

    bjack = 0;
    scanf("%d %d", &n, &m);
    if(!(card = (int *)malloc(sizeof(int) * n)))
        return (0);
    for(int i = 0; i < n; i++)
        scanf("%d", &card[i]);
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                sim = card[i] + card[j] + card[k];
                if(bjack < sim && sim <= m)
                    bjack = sim;
            }
        }
    }
    printf("%d", bjack);
}