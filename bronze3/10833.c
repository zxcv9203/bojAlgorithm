#include <stdio.h>

int main(void)
{
    int n;
    int students;
    int apple;
    int total;

    total = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &students, &apple);
        total += apple - apple / students * students;
    }
    printf("%d",total);
}