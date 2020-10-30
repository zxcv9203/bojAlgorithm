#include <stdio.h>

int main(void)
{
    int n;
    char mirror[100][101];
    int k;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%s", mirror[i]);
    scanf("%d", &k);
    if(k == 1)
    {
        for(int i = 0; i < n; i++)
            printf("%s\n", mirror[i]);
    }
    else if(k == 2)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = n - 1; j >= 0; j--)
                printf("%c", mirror[i][j]);
            printf("\n");
        }
    }
    else if(k == 3)
    {
        for(int i = n - 1; i >= 0; i--)
            printf("%s\n", mirror[i]);
    }
}