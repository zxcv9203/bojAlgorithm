#include <stdio.h>

int main(void)
{
    int n;
    int score_y;
    int score_k;
    int yonsei;
    int korea;

    scanf("%d", &n);
    yonsei = 0;
    korea = 0;
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < 9; i++)
        {
            scanf("%d %d", &score_y, &score_k);
            yonsei += score_y;
            korea += score_k;
        }
        if(yonsei < korea)
            printf("Korea\n");
        else if(yonsei > korea)
            printf("Yonsei\n");
        else
            printf("Draw\n");
    }
}