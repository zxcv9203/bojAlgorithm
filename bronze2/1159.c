#include <stdio.h>

int main(void)
{
    int n;
    char str[31];
    int alpha[26] = {0, };
    int cnt;

    cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        alpha[str[0] - 'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(alpha[i] >= 5)
        {
            printf("%c", i + 'a');
            cnt++;
        }
    }
    if(cnt == 0)
        printf("PREDAJA");
}