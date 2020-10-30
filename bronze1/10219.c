#include <stdio.h>

int main(void)
{
    char grill[12][12];
    int h;
    int w;
    int n;

    scanf("%d", &n);
    for(int j = 0; j < n; j++)
    {
        scanf("%d %d", &h, &w);
        for(int i = 0; i < h; i++)
            scanf("%s", grill[i]);
        for(int i = h - 1; i >= 0; i--)
            printf("%s\n", grill[i]);
    }

}