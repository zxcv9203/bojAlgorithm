#include <stdio.h>

int main(void)
{
    int hap,cha;

    scanf("%d %d", &hap, &cha);

    hap -= cha;
    if(hap < 0 || hap % 2 != 0)
        printf("-1");
    else
    {
        printf("%d %d",hap / 2 + cha, hap / 2);
    }   
}