#include <stdio.h>

int main(void)
{
    int total;
    int book;

    scanf("%d", &total);
    for(int i = 0; i < 9; i++)
    {
        scanf("%d",&book);
        total -= book;
    }
    printf("%d",total);

}