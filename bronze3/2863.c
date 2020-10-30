#include <stdio.h>

void ft_swap(double *n)
{
    double tmp[4];

    for(int i = 0; i < 4; i++)
    {
        tmp[i] = n[i];
    }
    n[0] = tmp[2];
    n[1] = tmp[0];
    n[2] = tmp[3];
    n[3] = tmp[1];
}
int main(void)
{
    double n[4];
    double tmp;
    double max;
    int cnt;

    max = -1;
    scanf("%lf %lf %lf %lf", &n[0], &n[1], &n[2], &n[3]);
    for(int i = 0; i < 4; i++)
    {
        tmp = n[0] / n[2] + n[1] / n[3];
        if(max < tmp)
        {
            max = tmp;
            cnt = i;
        }
        ft_swap(n);
    }
    printf("%d", cnt);
}