#include <stdio.h>

int main(void)
{
    char plate[51];
    int size;
    
    scanf("%s", plate);
    size = 10;
    for(int i = 1; plate[i]; i++)
    {
        if(plate[i] == plate[i - 1])
            size += 5;
        else
            size += 10;
    }
    printf("%d", size);
}