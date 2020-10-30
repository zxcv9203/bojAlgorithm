#include <stdio.h>

int main(void)
{
    char str[256];
    int happy;
    int sad;

    happy = 0;
    sad = 0;
    scanf("%[^\n]s", str);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ':' && str[i + 1] == '-' && str[i + 2] == ')')
            happy++;
        else if(str[i] == ':' && str[i + 1] == '-' && str[i + 2] == '(')
            sad++;  
    }
    if(happy == 0 && sad == 0)
        printf("none");
    else if(happy == sad)
        printf("unsure");
    else if(happy > sad)
        printf("happy");
    else
        printf("sad");
}