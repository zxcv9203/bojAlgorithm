#include <stdio.h>

int main(void)
{
    int n;
    int cnt;
    int tmp;
    scanf("%d",&n);
    cnt = -1;
    tmp = n + 1;
    for(int i = 0; i < 2 * n -1; i++)
    {
        if(i < n)
        {
            tmp--;
            cnt++;
        }
        else if(tmp < n)
        {
            tmp++;
            cnt--;
        }
        for(int a = cnt; a > 0; a--)
            printf("*");
        for(int j = 0; j < 2 * tmp -1; j++)
            printf(" ");
        
        printf("\n");
    }
}