#include <stdio.h>

int main(void)
{
    int n;
    int x;
    int y;
    int point[5] = {0, };

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x == 0 || y == 0)
            point[4]++;
        else if(x > 0 && y > 0)
            point[0]++;
        else if(x < 0 && y > 0)
            point[1]++;
        else if(x < 0 && y < 0)
            point[2]++;
        else if(x > 0 && y < 0)
            point[3]++;
    }
    for(int i = 0; i < 4; i++)
        printf("Q%d: %d\n", i + 1, point[i]);
    printf("AXIS: %d", point[4]);
}