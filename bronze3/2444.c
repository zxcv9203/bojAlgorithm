#include <stdio.h>

int main(void)
{
    int n;
    int cnt;
    int space;
    int ck;
    scanf("%d", &n);
    cnt = 0;
    space = n;
    ck = 0;
    for(int i = 0; i < 2 * n - 1; i++)
    {   
        if(i < n)
        {
            if(ck == 0)
            {
                cnt++;
                ck = 1;
            }
            else
                cnt+=2; 
            space--;
        }
        else
        {
            cnt-=2;
            space++;
        }
        for(int j = space; j > 0; j--)
            printf(" ");
        for(int k = 0; k < cnt; k++)
            printf("*");
        
        printf("\n");   
    }
}