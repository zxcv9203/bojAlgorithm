#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int total;
    char *num;

    scanf("%d", &n);
    total = 0;
    num = (char *)malloc(sizeof(char) * n + 1);
    scanf("%s", num);
    while(*num)
    {
        total += *num - '0';
        num++;
    }
    printf("%d", total);
}