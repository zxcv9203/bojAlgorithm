#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *ticket;
    int *line;

    scanf("%d", &n);
    if(!(ticket = (int *)malloc(sizeof(int) * n)))
        return (0);
    if(!(line = (int *)malloc(sizeof(int) * n)))
        return (0);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ticket[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(ticket[i] == 0)
            line[i] = i + 1;
        else
        {
            for(int j = 0; j < ticket[i]; j++)
            {
                line[i - j] = line[i - j - 1];
            }
            line[i - ticket[i]] = i + 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d", line[i]);
        if(i < n - 1)
            printf(" ");
    }
    free(ticket);
    free(line);
}