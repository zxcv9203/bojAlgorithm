#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start, end;
    double result;

    start = clock();
    /*------------------ 실행시간 확인할 코드 -----------------*/
    end = clock();
    result = (double)(end - start);
    printf("프로그램 실행 시간 : %lfms", result / CLOCKS_PER_SEC);

}