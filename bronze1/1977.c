#include <stdio.h>

int main(void)
{
    int m;
    int n;
    int min;
    int total;
    int fir;

    total = 0;
    fir = 1;
    scanf("%d %d", &m, &n);
    for(int i = 1; i * i <= n; i++)
    {
        if(i * i >= m)
        {
            if(fir)
            {
                min = i * i;
                fir = 0;
            }
            total += i * i;
        }
    }
    if(total != 0)
        printf("%d\n%d", total, min);
    else
        printf("-1");
}