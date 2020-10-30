#include <stdio.h>

int main(void)
{
    int n;
    int cnt;
    int c;
    scanf("%d", &n);
    cnt = n;
    c = 1;
    for(int i = 0; i < n; i++)
    {
        cnt--;
        
        for(int j = cnt; j > 0; j--)
            printf(" ");
        for(int k = 0; k < c; k++)
            printf("*");
        c+=2;
        printf("\n");
    }
}