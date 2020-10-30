#include <stdio.h>

int main(void)
{
    int n;
    int time;
    int y_cost;
    int m_cost;

    scanf("%d", &n);
    y_cost = 0;
    m_cost = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &time);
        y_cost += (time / 30 + 1) * 10;
        m_cost += (time / 60 + 1) * 15;
    }
    if(y_cost < m_cost)
        printf("Y %d", y_cost);
    else if(y_cost > m_cost)
        printf("M %d", m_cost);
    else
        printf("Y M %d", y_cost);
    
}