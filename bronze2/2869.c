#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int v;
    int day;

    scanf("%d %d %d", &a, &b, &v);

    day = (v - b - 1) / (a - b) + 1;
    printf("%d", day);

}