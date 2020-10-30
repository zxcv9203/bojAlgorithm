#include <stdio.h>

int main(void)
{
    int piece[6] = {1,1,2,2,2,8};
    int find[6];

    scanf("%d %d %d %d %d %d",
            &find[0],&find[1],&find[2],&find[3],&find[4],&find[5]);
    for(int i = 0; i < 6; i++)
        printf("%d ",piece[i] - find[i]);
    return (0);
}