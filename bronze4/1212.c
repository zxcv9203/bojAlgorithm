#include <stdio.h>

void two_to_eight(char *n)
{
    int i;

    i = 1;
    if(n[0] == '7')
            printf("111");
        else if(n[0] == '6')
            printf("110");
        else if(n[0] == '5')
            printf("101");
        else if(n[0] == '4')
            printf("100");
        else if(n[0] == '3')
            printf("11");
        else if(n[0] == '2')
            printf("10");
        else if(n[0] == '1')
            printf("1");
    while(n[i])
    {
        if(n[i] == '7')
            printf("111");
        else if(n[i] == '6')
            printf("110");
        else if(n[i] == '5')
            printf("101");
        else if(n[i] == '4')
            printf("100");
        else if(n[i] == '3')
            printf("011");
        else if(n[i] == '2')
            printf("010");
        else if(n[i] == '1')
            printf("001");
        else
            printf("000");
        i++;
    }
}
int main(void)
{
    char n[333335];
    scanf("%s", n);
    if(n[0] == '0')
    {
        printf("0");
        return (0);
    }
    two_to_eight(n);
}