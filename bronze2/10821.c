#include <stdio.h>

int main(void)
{
    char s[101];
    int cnt;

    cnt = 0;
    scanf("%s", s);
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == ',')
            cnt++;
    }
    printf("%d", cnt + 1);
}