#include <stdio.h>

int main(void)
{
    int n;
    int m;
    char castle[50][51];
    int col;
    int row;


    scanf("%d %d", &n, &m);
    col = n;
    row = m;

    for(int i = 0; i < n; i++)
        scanf("%s", castle[i]);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(castle[i][j] == 'X')
            {
                col--;
                break ;
            }
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(castle[j][i] == 'X')
            {
                row--;
                break ;
            }
        }
    }
    if(col > row)
        printf("%d", col);
    else
        printf("%d", row);
    
}