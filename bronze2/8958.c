#include <stdio.h>

int main(void)
{
    int n;
    char ox[80];
    int score;
    int total;
    
    scanf("%d", &n);
    while(n--)
    {
        score = 1;
        total = 0;
        scanf("%s", ox);
        for(int i = 0; ox[i]; i++)
        {
            if(ox[i] == 'O')
            {
                total += score;
                score++;
            }
            else
                score = 1;
        }
        printf("%d\n", total);
    }
}