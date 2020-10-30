#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int same;
    int total;

    scanf("%d %d %d", &a, &b, &c);
    same = 0;
    if(a == b)
        same++;
    if(b == c)
        same++;
    if(c == a)
        same++;
    total = a + b + c;
    if(total == 180 && same == 3)
        printf("Equilateral");
    else if(total == 180 && same == 1)
        printf("Isosceles");
    else if(total == 180 && same == 0)
        printf("Scalene");
    else
        printf("Error");
   return (0); 
}