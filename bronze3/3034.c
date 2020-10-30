#include <stdio.h>

int main(void)
{
    int n;
    int w;
    int h;
    int box;
    int matches;

    scanf("%d %d %d", &n, &w, &h);
    box = w * w + h * h;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &matches);
        matches *= matches;
        if(box >= matches)
            printf("DA\n");
        else
            printf("NE\n");
    }
}