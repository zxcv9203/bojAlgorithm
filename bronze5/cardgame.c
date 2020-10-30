#include <stdio.h>

int main(void)
{
    int set[5];
    int total;

    total = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &set[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        total += set[i];
    }
    printf("%d",total);
}