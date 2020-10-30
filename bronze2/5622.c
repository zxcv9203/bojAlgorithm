#include <stdio.h>

int dial(char *str)
{
    int time;

    time = 0;
    while(*str)
    {
        time += 2;
        if(*str >= 'A' && *str <= 'C')
            time += 1;
        else if(*str >= 'D' && *str <= 'F')
            time += 2;
        else if(*str >= 'G' && *str <= 'I')
            time += 3;
        else if(*str >= 'J' && *str <= 'L')
            time += 4;
        else if(*str >= 'M' && *str <= 'O')
            time += 5;
        else if(*str >= 'P' && *str <= 'S')
            time += 6;
        else if(*str >= 'T' && *str <= 'V')
            time += 7;
        else if(*str >= 'W' && *str <= 'Z')
            time += 8;
        else
            time += 9;
        str++;
    }
    return (time);
}

int main(void)
{
    char str[16];
    int time;

    scanf("%s", str);
    time = dial(str);
    printf("%d", time);
}
