#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int ft_sum(char bin1, char bin2, int carry, char *bin)
{
    char arr[2] = {'0', '1'};
    int sum;
    
    sum = (bin1 - '0') + (bin2 - '0') + carry;
    *bin = arr[sum % 2];
    return (sum / 2);
}

void binary_sum(char *bin, char *bin1, char *bin2)
{
    int len1;
    int len2;
    int i;
    int carry;

    len1 = ft_strlen(bin1);
    len2 = ft_strlen(bin2);
    i = 0;
    carry = 0;
    while(len1 > 0 || len2 > 0)
    {
        if(len1 <= 0)
            carry = ft_sum('0', bin2[--len2], carry, &bin[i]);
        else if(len2 <= 0)
            carry = ft_sum(bin1[--len1], '0', carry, &bin[i]);
        else
            carry = ft_sum(bin1[--len1], bin2[--len2], carry, &bin[i]);
        i++;
    }
    if(carry != 0)
    {
        bin[i] = '1';
        i++;
    }
    bin[i] = '\0';
}
int main(void)
{
    char bin1[81];
    char bin2[81];
    char bin[100];
    int len;

    scanf("%s %s", bin1, bin2);
    binary_sum(bin, bin1, bin2);
    len = ft_strlen(bin) - 1;
    while(bin[len] == '0' && len != 0)
        len--;
    for(; len >= 0; len--)
        printf("%c", bin[len]);
}