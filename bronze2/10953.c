#include <stdio.h>

int main(void)
{
    int n;
    char str[6];
    int a;
    int b;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        a = 0;
        b = 0;
        scanf("%s", str);
        a = str[0] - '0';
        b = str[2] - '0';
        printf("%d\n", a + b);
    }
}