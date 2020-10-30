#include <stdio.h>

void sensorship(char *str)
{
    char camb[10] = "CAMBRIDGE";
    int ck;

    while(*str)
    {
        ck = 0;
        for(int i = 0; camb[i]; i++)
        {
            if(*str == camb[i])
            {
                ck = 1;
                break ;
            }
        }
        if(ck == 0)
            printf("%c", *str);
        str++;
    }
}
int main(void)
{
    char str[101];

    scanf("%s", str);
    sensorship(str);
}