#include <stdio.h>

int main(void)
{
    int a[10];
    int b[10];
    int win;

    win = 0;
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < 10; i++)
        scanf("%d", &b[i]);
    for(int i = 0; i < 10; i++)
    {
        if(a[i] > b[i])
            win++;
        else if(a[i] < b[i])
            win--;
    }
    if(win > 0)
        printf("A");
    else if(win < 0)
        printf("B");
    else
        printf("D");  
}