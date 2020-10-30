#include <stdio.h>

int main(void)
{
    char n[1001];
    int digit_root;
    int j;

    while(1)
    {
        scanf("%s", n);
        if(n[0] == '0')
            break ;
        while(1)
        {
            digit_root = 0;
            j = 0;
            for(int i = 0; n[i] != '\0'; i++)
                digit_root += n[i] - '0';
            if(digit_root < 10)
                break ;
            while(digit_root)
            {
                n[j] = digit_root % 10 + '0';
                digit_root = digit_root / 10;
                j++;
            }
            n[j] = '\0';
        }
        printf("%d\n", digit_root);
    }
}