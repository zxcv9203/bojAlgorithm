#include <stdio.h>

int main(void)
{
    int t;
    int h;
    int w;
    int n;

    scanf("%d",&t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        if(n % h == 0)
        {
            printf("%d%02d\n",h, n / h);
        }
        else
        {
        printf("%d",n % h);
        printf("%02d\n",n / h + 1);
        }
    }
}