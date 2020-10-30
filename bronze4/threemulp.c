#include <stdio.h>

int main(void)
{
    int n1,n2;
    int mul[3];
    scanf("%d %d", &n1, &n2);
    
    mul[0] = n2 % 10;
    mul[1] = n2 - (n2 / 100 * 100) - mul[0];
    mul[2] = n2 - mul[0] - mul[1];

    printf("%d\n",n1 * mul[0]);
    printf("%d\n",n1 * mul[1] / 10);
    printf("%d\n",n1 * mul[2] / 100);
    printf("%d",n1 * mul[0] + n1 * mul[1] + n1 * mul[2]); 
}