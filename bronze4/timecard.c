#include <stdio.h>

int main(void)
{
    int h1[3], m1[3], s1[3], h2[3], m2[3], s2[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d %d %d", &h1[i], &m1[i], &s1[i], &h2[i], &m2[i], &s2[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        if(s1[i] > s2[i])
        {
            m2[i] -= 1;
            s2[i] += 60;
        }
        if(m1[i] > m2[i])
        {
            h2[i] -= 1;
            m2[i] += 60;
        }
        printf("%d %d %d\n", h2[i] - h1[i], m2[i] - m1[i], s2[i] - s1[i]);
    }
    return (0);
}