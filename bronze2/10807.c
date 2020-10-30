#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *na;
    int v;
    int cnt;

    scanf("%d", &n);
    if(!(na = (int *)malloc(sizeof(int) * n)))
            return (0);
    for(int i = 0; i < n; i++)
        scanf("%d", &na[i]);
    scanf("%d", &v);
    cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(na[i] == v)
            cnt++;
    }
    printf("%d", cnt);
    free(na);
}