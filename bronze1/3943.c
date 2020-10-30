#include <stdio.h>

int main(void)
{
    int t;
    int n;
    int max;

    max = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        max = n;
        while(n != 1)
        {
            if(n % 2 == 0)
                n /= 2;
            else
                n = n * 3 + 1;
            if(max < n)
                max = n;
        }
        printf("%d\n", max);
    }
}