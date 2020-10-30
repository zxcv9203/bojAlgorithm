#include <stdio.h>

int main(void)
{
    int n;
    int candy;
    int farm;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &candy, &farm);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", candy / farm, candy % farm);
    }
}