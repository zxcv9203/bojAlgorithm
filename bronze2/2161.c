#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *card;
    int j;
    int tmp;

    scanf("%d", &n);
    if(!(card = (int *)malloc(sizeof(int) * n)))
        return (0);
    for(int i = 0; i < n; i++)
        card[i] = i + 1;
    for(int i = 0; i < n; n--)
    {
        printf("%d", card[0]);
        if(i < n - 1)
            printf(" ");
        tmp = card[1];
        for(j = 1; j < n; j++)
        {
            card[j - 1] = card[j];
        }
        card[j - 1] = tmp;
        for(j = 1; j < n; j++)
        {
            card[j - 1] = card[j];
        }
    }
    
}