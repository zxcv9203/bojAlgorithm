#include <stdio.h>

void swap_A(char *ball)
{
    char tmp;

    tmp = ball[0];
    ball[0] = ball[1];
    ball[1] = tmp;
}
void swap_B(char *ball)
{
    char tmp;

    tmp = ball[1];
    ball[1] = ball[2];
    ball[2] = tmp;
}
void swap_C(char *ball)
{
    char tmp;

    tmp = ball[2];
    ball[2] = ball[0];
    ball[0] = tmp;
}
int main(void)
{
    char cup[51];
    char ball[3];
    int i;

    ball[0] = 'o';
    ball[1] = 'x';
    ball[2] = 'x';
    i = 0;
    scanf("%s", cup);
    while(cup[i])
    {
        if(cup[i] == 'A')
            swap_A(ball);
        else if(cup[i] == 'B')
            swap_B(ball);
        else
            swap_C(ball);
        i++;
    }
    for(i = 0; i < 3; i++)
    {
        if(ball[i] == 'o')
            printf("%d", i + 1);
    }
}