#include <stdio.h>
int main(void)
{
    int n;
    int j_box;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &j_box);
        for(int j = 0; j < j_box; j++)
        {
            for(int k = 0; k < j_box; k++)
            {
                if(j == 0 || j == j_box - 1)
                    printf("#");
                else if(k == 0 || k == j_box - 1)
                    printf("#");
                else
                    printf("J");
            }
            printf("\n");
        }
        printf("\n");
    }
}