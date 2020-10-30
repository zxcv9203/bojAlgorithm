#include <stdio.h>

int main(void)
{
    int n;
    int histo;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &histo);
        for(int j = 0; j < histo; j++)
            printf("=");
        printf("\n");
    }
}