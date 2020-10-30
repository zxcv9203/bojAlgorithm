#include <stdio.h>

int main(void)
{
    int range;
    int f;
    int n;

    scanf("%d %d", &range, &f);
    
    n = range - (range % 100);
    for(; n <= range + 99; n++)
    {
        if(n % f == 0)
            break ;
    }
    printf("%02d", n % 100);
}