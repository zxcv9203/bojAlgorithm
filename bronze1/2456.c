#include <stdio.h>

int main(void)
{
    int n;
    int std[3][4] = {0, };
    int a;
    int b;
    int c;
    int ck;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        std[0][0] += a;
        std[1][0] += b;
        std[2][0] += c;
        std[0][a]++;
        std[1][b]++;
        std[2][c]++;
    }
    a = std[0][0];
    c = 0;
    b = 0;
    ck = 0;
    for(int i = 1; i < 3; i++)
    {
        if(a < std[i][0])
        {
            a = std[i][0];
            c = i;
        }
    }
    for(int i = 0; i < 3; i++)
    {
        if(a == std[i][0])
        {
            if(std[c][3] != std[i][3])
            {
                a = std[c][3] > std[i][3] ? std[c][0] : std[i][0];
                c = std[c][3] > std[i][3] ? c : i;
                ck = 1;
            }
            else if(std[c][2] != std[i][2])
            {
                a = std[c][2] > std[i][2] ? std[c][0] : std[i][0];
                c = std[c][2] > std[i][2] ? c : i;
                ck = 1;
            }
            else
                b++;
        }
    }
    if(b >= 2 && ck == 0)
        printf("%d %d", 0, a);
    else
        printf("%d %d", c + 1, a);
}