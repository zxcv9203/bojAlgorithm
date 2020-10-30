#include <stdio.h>

int main(void)
{
    int t;
    char str[81];
    int n;

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %s", &n, str);
        for(int j = 0; str[j]; j++)
        {
            if(n - 1 != j)
                printf("%c", str[j]);
        }
        printf("\n");
    }
}