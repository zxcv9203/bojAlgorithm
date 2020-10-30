#include <stdio.h>

int main(void)
{
    char str[101];

    scanf("%[^\n]s", str);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'M')
            str[i] += 13;
        else if(str[i] >= 'N' && str[i] <= 'Z')
            str[i] -= 13;
        else if(str[i] >= 'a' && str[i] <= 'm')
            str[i] += 13;
        else if(str[i] >= 'n' && str[i] <= 'z')
            str[i] -= 13;
    }
    printf("%s", str);
}
