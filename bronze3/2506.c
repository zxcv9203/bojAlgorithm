#include <stdio.h>

int main(void)
{
    int n;
    int answer;
    int score;
    int total;

    scanf("%d", &n);

    total = 0;
    score = 1;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&answer);
        if(answer == 1)
        {
            total += score;
            score++;
        }
        else
            score = 1;
    }
    printf("%d", total);
}