#include <stdio.h>

long long sum(int *a, int n)
{
    long long total;

    total = 0;
    for(int i = 0; i < n; i++)
        total += a[i];
    return (total);
}