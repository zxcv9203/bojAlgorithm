#include <stdio.h>

int main(void)
{
    char str[101];
    int len;

    scanf("%s", str);
    len = 0;
    while(str[len])
        len++;
    printf("%d", len);
}