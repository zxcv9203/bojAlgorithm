#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int std;
    double *score;
    double avg;
    int cnt;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &std);
        avg = 0;
        cnt = 0;
        if(!(score = (double *)malloc(sizeof(double) * std)))
            return (0);
        for(int j = 0; j < std; j++)
        {
            scanf("%lf", &score[j]);
            avg += score[j];
        }
        avg /= std;
        for(int j = 0; j < std; j++)
        {
            if(score[j] > avg)
                cnt++;
        }
        printf("%0.3lf%%\n", (double)cnt / std * 100);
        free(score);
    }
}