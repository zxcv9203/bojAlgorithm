#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int t;
    int *a;
    int *b;

    scanf("%d", &t);
    a = (int *)malloc(sizeof(int) * t);
    b = (int *)malloc(sizeof(int) * t);

    for(int i = 0; i < t; i++)
        scanf("%d %d", &a[i], &b[i]);
    for(int i = 0; i < t; i++)
        printf("%d\n", a[i] + b[i]);
}