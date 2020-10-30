#include <stdio.h>

int main(void)
{
    char str[101];

    scanf("%s", str);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else
            str[i] -= 32;
    }
    printf("%s", str);
}