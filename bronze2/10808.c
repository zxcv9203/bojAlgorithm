#include <stdio.h>

int main(void)
{
    char str[101];
    int alpha[26] = {0, };
    int i;

    i = 0;
    scanf("%s", str);
    while(str[i])
    {
        alpha[str[i] - 'a']++;
        i++;
    }
    i = 0;
    while(i < 26)
    {
        printf("%d ", alpha[i]);
        i++;
    }
}