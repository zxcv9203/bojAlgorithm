#include <stdio.h>
typedef struct  t_droid
{
    double bl;
    double ss;
    double cs;
    double hand;
    double leg;
}               droid;               
int main(void)
{
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    droid ad;

    ad.bl = 350.34;
    ad.ss = 230.90;
    ad.cs = 190.55;
    ad.hand = 125.30;
    ad.leg = 180.90;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        printf("$%0.2lf\n", a * ad.bl + b * ad.ss + c * ad.cs + d * ad.hand + e * ad.leg);
    }
}