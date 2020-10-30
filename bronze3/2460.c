#include <stdio.h>

int main(void)
{
    int out;
    int in;
    int max;
    int total;

    max = 0;
    total = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d %d", &out, &in);
        total += in - out;
        if(max < total)
            max = total;
    }
    printf("%d", max);
}