#include <stdio.h>

int main(void)
{
    int a;
    int total;

    total = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
        total += i;
    printf("%d",total);
}