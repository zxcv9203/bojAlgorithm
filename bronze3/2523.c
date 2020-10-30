#include <stdio.h>

int main(void)
{
    int n;
    int cnt;
    scanf("%d", &n);
    cnt = 0;
    for(int i = 0; i < 2*n-1; i++)
    {
        if(i < n)
            cnt++;
        else
            cnt--;
        for(int i = 0; i < cnt; i++)
            printf("*");
        printf("\n");
    }
}