#include <stdio.h>

int main(void)
{
    int a, row, col;
    scanf("%d", &a);
    row = a / 2;
    col = a - row;
    printf("%d", (row + 1) * (col + 1));
}