#include <stdio.h>

int main(void)
{
    int out;
    int in;
    int max;
    int a;

    max = 0;
    a = 0;
    for(int i = 0; i < 4; i++)
    {
        scanf("%d %d", &out, &in);
        a += in - out;
        if(max < a)
            max = a;
    }
    printf("%d", max);
}