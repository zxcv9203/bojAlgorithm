#include <stdio.h>

int main(void)
{
    char str[10001];
    int j_cnt;
    int i_cnt;

    j_cnt = 0;
    i_cnt = 0;
    scanf("%s", str);
    for(int i = 0 ; str[i]; i++)
    {
        if(str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I')
            j_cnt++;
        else if(str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I')
            i_cnt++;
    }
    printf("%d\n%d", j_cnt, i_cnt);
}