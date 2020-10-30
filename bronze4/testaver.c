#include <stdio.h>

int main(void)
{
    int score[5];
    int total;
    for(int i = 0; i < 5; i++)
        scanf("%d",&score[i]);
    total = 0;
    for(int i = 0; i < 5; i++)
    {
        if(score[i] < 40)
            score[i] = 40;
        total += score[i];
    }
    printf("%d", total / 5);
}