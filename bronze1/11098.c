#include <stdio.h>

void namesave(char *star, char *name)
{
    int i;

    i = 0;
    while(name[i])
    {
        star[i] = name[i];
        i++;
    }
    star[i] = '\0';
}

int main(void)
{
    int n;
    int p;
    int pay[100];
    char name[21];
    int max;
    char star[21];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        max = 0;
        scanf("%d", &p);
        for(int j = 0; j < p; j++)
        {
            scanf("%d %s", &pay[j], name);
            if(pay[j] > max)
            {
                namesave(star, name);
                max = pay[j];
            }
        }
        printf("%s\n", star);
    }
}