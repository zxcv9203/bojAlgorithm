#include <stdio.h>

int main(void)
{
    int n;
    int a;
    int cnt;

    cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if(a == 0)
            cnt++;
        else
            cnt--;
    }
    if(cnt > 0)
        printf("Junhee is not cute!");
    else
        printf("Junhee is cute!");
    
}