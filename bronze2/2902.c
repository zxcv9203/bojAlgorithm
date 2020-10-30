#include <stdio.h>

int main(void)
{
    char str[200];
    int i;

    i = 0;
    scanf("%s", str);

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i]);
        }
        i++;
    }
}