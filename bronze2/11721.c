#include <stdio.h>

int main(void)
{
    char str[101];
    int i;

    i = 0;
    scanf("%s", str);
    while(str[i])
    {
        for(int j = 0; j < 10; j++)
        {
            if(!(str[i + j]))
                return (0);
            printf("%c", str[i + j]);
        }
        printf("\n");
        i += 10;
    }
}