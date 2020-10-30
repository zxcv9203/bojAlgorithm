#include <stdio.h>
#include <string.h>

int value_ck(char *str)
{
    if(strcmp(str,"black") == 0)
        return (0);
    else if(strcmp(str,"brown") == 0)
        return (1);
    else if(strcmp(str,"red") == 0)
        return (2);
    else if(strcmp(str,"orange") == 0)
        return (3);
    else if(strcmp(str,"yellow") == 0)
        return (4);
    else if(strcmp(str,"green") == 0)
        return (5);
    else if(strcmp(str,"blue") == 0)
        return (6);
    else if(strcmp(str,"violet") == 0)
        return (7);
    else if(strcmp(str,"grey") == 0)
        return (8);
    else
        return (9); 
}

int mult_ck(char *str)
{
    if(strcmp(str,"black") == 0)
        return (1);
    else if(strcmp(str,"brown") == 0)
        return (10);
    else if(strcmp(str,"red") == 0)
        return (100);
    else if(strcmp(str,"orange") == 0)
        return (1000);
    else if(strcmp(str,"yellow") == 0)
        return (10000);
    else if(strcmp(str,"green") == 0)
        return (100000);
    else if(strcmp(str,"blue") == 0)
        return (1000000);
    else if(strcmp(str,"violet") == 0)
        return (10000000);
    else if(strcmp(str,"grey") == 0)
        return (100000000);
    else
        return (1000000000);
}
int main(void)
{
    long long orm;
    char str[3][9];

    orm = 0;
    for(int i = 0; i < 3; i++)
        scanf("%s", str[i]);
    orm = value_ck(str[0]) * 10;
    orm += value_ck(str[1]);
    orm *= mult_ck(str[2]);
    printf("%lld", orm);
}