#include <stdio.h>

int main(void)
{
    int n;
    int dice[3];
    int lot;
    int money;
    int max;

    lot = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);
        if(dice[0] == dice[1] && dice[1] == dice[2] && dice[0] == dice[2])
            money = 10000 + dice[0] * 1000;
        else if(dice[0] == dice[1] || dice[0] == dice[2])
            money = 1000 + dice[0] * 100;
        else if(dice[1] == dice[2])
            money = 1000 + dice[1] * 100;
        else
        {
            max = dice[0];
            for(int j = 1; j < 3; j++)
            {
                if(max < dice[j])
                    max = dice[j];
            }
            money = max * 100;
        }
        if(lot < money)
            lot = money;
    }
    printf("%d", lot);
}