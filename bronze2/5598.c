#include <stdio.h>

int main(void)
{
    char kisar[2][27] =
    {
        {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
        {"DEFGHIJKLMNOPQRSTUVWXYZABC"}
    };
    char pw[1001];
    
    scanf("%s", pw);
    for(int i = 0; pw[i]; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(pw[i] == kisar[1][j])
            {
                printf("%c", kisar[0][j]);
                break ;
            }
        }
    }
}