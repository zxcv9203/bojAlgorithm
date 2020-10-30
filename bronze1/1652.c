#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char map[100][101];
    int row;
    int tmp;
    int col;

    row = 0;
    col = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%s", map[i]);
    for(int i = 0; i < n; i++)
    {
        tmp = 0;
        for(int j = 0; j < n; j++)
        {
            if(map[i][j] == '.')
                tmp++;
            else if(tmp > 1 && map[i][j] == 'X')
            {
                row++;
                tmp = 0;
            }
            else
                tmp = 0;
        }
        if(tmp > 1)
            row++;   
    }
    for(int i = 0; i < n; i++)
    {
        tmp = 0;
        for(int j = 0; j < n; j++)
        {
            if(map[j][i] == '.')
                tmp++;
            else if(tmp > 1 && map[j][i] == 'X')
            {
                tmp = 0;
                col++;
            }
            else
                tmp = 0;
        }
        if(tmp > 1)
            col++;
    }
    printf("%d %d", row, col);
}