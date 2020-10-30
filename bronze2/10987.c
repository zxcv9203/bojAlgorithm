#include <stdio.h>

int main(void)
{
    char str[101];
    int cnt;

    cnt = 0;
    scanf("%s", str);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            cnt++;
    }
    printf("%d", cnt);
}