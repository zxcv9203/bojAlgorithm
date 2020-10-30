#include <stdio.h>

int main(void)
{
    int n;
    int tmp;
    int cnt;
    int imsi;

    tmp = 0;
    cnt = 0;
    scanf("%d", &n);
    while(1)
    {   
        if(n <= tmp)
            break;  
        imsi = tmp;
        tmp += cnt;
        cnt++;      
    }
    if(cnt % 2 == 0)
        printf("%d/%d",cnt - (n - imsi), n - imsi);
    else
        printf("%d/%d",n - imsi, cnt - (n - imsi));
}