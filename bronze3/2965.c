#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int ab_len;
    int bc_len;
    int result;

    scanf("%d %d %d", &a, &b, &c);
    ab_len = b - a;
    bc_len = c - b;
    if(ab_len < bc_len)
        result = bc_len;
    else
        result = ab_len;
    printf("%d", result - 1);
}