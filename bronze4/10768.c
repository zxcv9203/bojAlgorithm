#include <stdio.h>

int main(void)
{
    int m,d;
    scanf("%d %d", &m, &d);

    if(m == 2 && d == 18)
        printf("Special");
    else if(m > 2 || (m == 2 && d > 18))
        printf("After");
    else if(m <= 2)
        printf("Before");

}