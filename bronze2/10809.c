#include <stdio.h>

int main(void)
{
    char str[100];
    int alpha[26];
    int i;

    scanf("%s", str);
    for(i = 0; i < 26; i++)
        alpha[i] = -1;
    i = 0;
    while(str[i])
    {
        if(alpha[str[i] - 'a'] == -1)
            alpha[str[i] - 'a'] = i;
        i++;
    }
    for(i = 0; i < 26; i++)
    {
        printf("%d", alpha[i]);
        if(i == 25)
            break;
        printf(" ");
    }
}