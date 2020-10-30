#include <stdio.h>

int main(void)
{
    int n[3];
    char alpha[4];
    int tmp;

    scanf("%d %d %d %s", &n[0], &n[1], &n[2], alpha);
    for(int i = 0; i < 2; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {
            if(n[i] > n[j])
            {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%d", n[alpha[i] - 'A']);
        if(i < 2)
            printf(" ");
    }
}