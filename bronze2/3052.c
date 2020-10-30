#include <stdio.h>

int main(void)
{
    int n[10];
    int cnt;
    int ck;

    cnt = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
        n[i] %= 42;
    }
    for(int i = 0; i < 10; i++)
    {
        ck = 1;
        for(int j = i + 1; j < 10; j++)
        {
            if(n[i] == n[j])
            {
                ck = 0;
                break;
            }
        }
        if(ck)
            cnt++;
    }
    printf("%d", cnt);
    
}