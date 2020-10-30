#include <stdio.h>

int main(void)
{
    int a[3];
    int j;
    int key;

    j = 0;
    for(int i = 0; i< 3;i++)
        scanf("%d",&a[i]);
    for (int i = 1; i < 3; i++)
    {
        key = a[i];
        
        for (j = i - 1; j >= 0 && a[j] > key; j--)
            a[j + 1] = a[j];

        a[j + 1] = key;
    }
    printf("%d",a[1]);
}