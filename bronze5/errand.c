#include <stdio.h>

int main(void)
{
    int distance[4];
    int total;

    total = 0;
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &distance[i]);
        total += distance[i];
    }
    printf("%d\n%d",total / 60, total % 60);
    return (0);
}