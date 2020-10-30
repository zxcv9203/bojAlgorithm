#include <stdio.h>

int main(void)
{
    int n;
    int hope;
    int refuse;
    int pcroom[100] = {0, };

    refuse = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &hope);
        if(pcroom[hope - 1])
            refuse++;
        else
            pcroom[hope - 1] = 1;
    }
    printf("%d", refuse);
}