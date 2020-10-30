#include <stdio.h>

int ft_strlen(char *narr)
{
    int i;

    i = 0;
    while(narr[i])
        i++;
    return (i);
}
void ft_zeroinit(char *narr, int low, int high)
{
    while(low < high)
    {
        narr[low] = '0';
        low++;
    }
    narr[low] = '\0';
}
void ft_reverse(char *narr, int size)
{
    int i;
    char tmp;

    i = 0;
    while(i < size / 2)
    {
        tmp = narr[size - i - 1];
        narr[size - i - 1] = narr[i];
        narr[i] = tmp;
        i++;
    }
}
void ft_bigsum(char *a, char *b, int size)
{
    int i;
    int carry;
    char total[100000];

    i = 0;
    while(i < size)
    {
        total[i] = ((a[i] - '0') + (b[i] - '0') + carry) % 10 + '0';
        if((a[i] - '0') + (b[i] - '0') > 9)
            carry = 1;
        else
            carry = 0;
        i++;
    }
    if(carry == 1)
        total[i] = '1';

    ft_reverse(total,ft_strlen(total));
    total[ft_strlen(total)] = '\0';
    printf("%s",total);
}
int main(void)
{
    char a[100000];
    char b[100000];
    int a_size;
    int b_size;

    scanf("%s %s", a, b);
    a_size = ft_strlen(a);
    b_size = ft_strlen(b);

    if(a_size >= b_size)
    {
        ft_reverse(a,a_size);
        ft_reverse(b,b_size);
        ft_zeroinit(b,b_size,a_size);   
        ft_bigsum(a,b,a_size);
    }
    else
    {    
        ft_reverse(b,b_size);
        ft_reverse(a,a_size);
        ft_zeroinit(a,a_size,b_size);
        ft_bigsum(b,a,b_size);
    }
}