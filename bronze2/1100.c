#include <stdio.h>

int main(void)
{
    char chess[8][9];
    int cnt;

    cnt = 0;
    for(int i = 0; i < 8; i++)
        scanf("%s", chess[i]);
    for(int i = 0; i < 8; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < 8; j += 2)
            {
                if(chess[i][j] == 'F')
                    cnt++;
            }
        }
        else
        {
           for(int j = 1; j < 8; j += 2)
            {
                if(chess[i][j] == 'F')
                    cnt++;
            } 
        }
    }
    printf("%d", cnt);
}
