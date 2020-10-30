#include <stdio.h>

int main(void)
{
    int a[4];
    int tmp;
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("%d",a[0] * a[2]);
}