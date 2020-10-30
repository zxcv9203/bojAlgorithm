#include <stdio.h>

int main(void)
{
    int n;
    int min;
    int max;
    int score;

    scanf("%d", &n);
    min = 1001;
    max = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if(min > score)
            min = score;
        if(max < score)
            max = score;
    }
    printf("%d", max - min);
}