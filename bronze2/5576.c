#include <stdio.h>

void ft_sort(int *n)
{
    int tmp;

    for(int i = 0; i < 9; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(n[i] < n[j])
            {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }
}
int main(void)
{
    int w[10];
    int k[10];
    int w_sum;
    int k_sum;

    for(int i = 0; i < 10; i++)
        scanf("%d", &w[i]);
    for(int i = 0; i < 10; i++)
        scanf("%d", &k[i]);
    ft_sort(w);
    ft_sort(k);
    w_sum = w[0] + w[1] + w[2];
    k_sum = k[0] + k[1] + k[2];
    printf("%d %d", w_sum, k_sum);
}