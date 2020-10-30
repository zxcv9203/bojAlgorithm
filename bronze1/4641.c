#include <stdio.h>

int main(void)
{
    int arr[15];
    int n;
    int cnt;
    int i;

    while(1)
    {
        i = 0;
        cnt = 0;
        scanf("%d", &n);
        if(n == -1)
            break ;
        while(n != 0)
        {
            arr[i] = n;
            scanf("%d", &n);
            if(n == -1)
                break ;
            i++;
        }
        for(int j = 0; j < i; j++)
        {
            for(int k = 0; k < i; k++)
            {
                if(arr[j] * 2 == arr[k])
                    cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}