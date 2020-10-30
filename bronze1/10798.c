#include <stdio.h>

int main(void)
{
    char str[5][16];
    int i;
    int j;
    int cnt[6] = {0, };

    i = 0;
    j = 0;
    for(int i = 0; i < 5; i++)
        scanf("%s", str[i]);
    while(1)
    {
        if(str[i][j] == '\0')
            cnt[i] = 1;
        if(cnt[0] + cnt[1] + cnt[2] + cnt[3] + cnt[4] == 5)
            break ;
        if(str[i][j] != '\0' && cnt[i] == 0)
            printf("%c", str[i][j]);
        if(i < 4)
            i++;
        else
        {
            i = 0;
            j++;
        }
    }
}