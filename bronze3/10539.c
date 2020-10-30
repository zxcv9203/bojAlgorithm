#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *a;
    int tmp;
    tmp = 0;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        a[i] = a[i] * (i + 1) - tmp;
        tmp += a[i];
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);
}
