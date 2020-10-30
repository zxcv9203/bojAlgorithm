#include <stdio.h>

int main(void)
{
    int a[11];  //11에 total 값
    int b[11];
    char last;

    a[10] = 0;
    b[10] = 0;
    last = 0;
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < 10; i++)
        scanf("%d", &b[i]);
    for(int i = 0; i < 10; i++)
    {
        if(a[i] > b[i])
        {
            a[10] += 3;
            last = 'A';
        }
        else if(a[i] < b[i])
        {
            b[10] += 3;
            last = 'B';
        }
        else
        {
            a[10]++;
            b[10]++;   
        }
    }
    printf("%d %d\n", a[10], b[10]);
    if(last == 0)
        printf("D");
    else if(a[10] == b[10])
        printf("%s",last == 'A' ? "A" : "B");
    else
        printf("%s",a[10] < b[10] ? "B" : "A");
}