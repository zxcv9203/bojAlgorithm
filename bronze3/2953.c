#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int d;
    int total;
    int winner;

    total = 0;
    for(int i = 1; i <= 5; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(total < a+b+c+d)
        {
            total = a+b+c+d;
            winner = i;
        }
    }
    printf("%d %d",winner, total);
}