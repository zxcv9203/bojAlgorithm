#include <stdio.h>

int main(void)
{
    int n[5];
    int tmp;
    int aver;

    aver = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        aver += n[i];
    }
    aver /= 5;
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(n[i] > n[j])
            {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }
    printf("%d\n%d", aver, n[2]);
}