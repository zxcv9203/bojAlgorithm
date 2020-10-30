#include <stdio.h>

int main(void)
{
    int t;
    int n;
    int c;
    double g;
    int c_total;
    double g_total;
    
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        c_total = 0;
        g_total = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++)
        {
            scanf("%d %lf", &c, &g);
            c_total += c;
            g_total += c * g;
        }
        printf("%d %.1lf\n", c_total, g_total / c_total);
    }
}