#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    double *score;
    double avg;
    double max;

    avg = 0;
    max = 0;
    scanf("%d", &n);
    if(!(score = (double *)malloc(sizeof(double) * n)))
        return (0);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &score[i]);
        if(max < score[i])
            max = score[i];
    }
    for(int i = 0; i < n; i++)
    {
        score[i] = score[i] / max * 100;
        avg += score[i];
    }
    printf("%g", avg / n);
    free(score);
}