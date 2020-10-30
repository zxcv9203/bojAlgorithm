#include <stdio.h>

int main(void)
{
    int c;
    int k;
    int p;
    int wine;

    wine = 0;
    scanf("%d %d %d", &c, &k, &p);
    for(int i = 1; i <= c; i++)
        wine += k * i + p * (i * i);   
    printf("%d", wine);
}