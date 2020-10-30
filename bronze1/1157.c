#include <stdio.h>

void alpha_ck(char *str, int *alpha)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            alpha[str[i] - 'a']++;
        else
            alpha[str[i] - 'A']++;
        i++;
    }
}
int main(void)
{
    char str[1000001];
    int alpha[26] = {0, };
    int max;
    int ans;

    max = 0;
    scanf("%s", str);
    alpha_ck(str, alpha);
    for(int i = 0; i < 26; i++)
    {
        if(alpha[i] > max)
        {
            max = alpha[i];
            ans = i;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(max == alpha[i] && i != ans)
        {
            printf("?");
            return (0);
        }
    }
    printf("%c", ans + 'A');
}