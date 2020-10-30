#include <stdio.h>

int main(void)
{
    int n[10];
    int total;
    int cnt[2];

    total = 0;
    cnt[0] = 0;
    cnt[1] = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
        total += n[i];
    }
    printf("%d\n", total / 10);
    for(int i = 0; i < 10; i++)
    {
        total = 0;
        for(int j = 0; j < 10; j++)
        {
            if(n[i] == n[j])
                total++;
            if(total > cnt[0])
            {
                cnt[0] = total;
                cnt[1] = n[i];
            }
        }
    }
    printf("%d", cnt[1]);
}