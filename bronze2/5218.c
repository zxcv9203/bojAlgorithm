#include <stdio.h>

int main(void)
{
    int n;
    char str[2][21];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s", str[0], str[1]);
        printf("Distances: ");
        for(int j = 0; str[0][j] && str[1][j]; j++)
        {
            if(str[0][j] <= str[1][j])
                printf("%d ", str[1][j] - str[0][j]);
            else
                printf("%d ", (26 + str[1][j]) - str[0][j]);
        }
        printf("\n");
    }
}