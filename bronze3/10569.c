#include <stdio.h>

int main(void)
{
    int t;
    int v;
    int e;

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &e, &v);
        printf("%d\n", v - e + 2);
    }
}