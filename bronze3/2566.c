#include <stdio.h>

int main(void)
{
    int arr[9][9];
    int row;
    int col;
    int max;

    max = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                col = i;
                row = j;
            }
        }
    }
    printf("%d\n%d %d", max, col + 1, row + 1);
}