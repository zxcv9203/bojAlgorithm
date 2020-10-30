#include <stdio.h>

int main(void)
{
    int n;
    int time;
    int work;
    int cnt;

    cnt = 0;
    scanf("%d %d", &n, &time);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &work);
        if(time < work)
            break;
        time -= work;
        cnt++;
    }
    printf("%d", cnt);
}