#include <stdio.h>

int main(void)
{
    int k;
    int n;
    int t;
    int time;
    char answer; 
    time = 210;
    scanf("%d %d", &k, &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %c", &t, &answer);
        time -= t;
        if(time <= 0)
        {
            printf("%d", k);
            break ;
        }
        if(answer == 'T')
            k++; 
        if(k > 8)
            k = 1;
    }
}