#include <stdio.h>

int main(void)
{
    char score[3];
    scanf("%s", score);
    
    if(score[0] == 'A')
    {
        switch(score[1])
        {
            case '+':
                printf("4.3");
                break;
            case '0':
                printf("4.0");
                break;
            case '-':
                printf("3.7");
                break;
        }
    }
    else if(score[0] == 'B')
    {
        switch(score[1])
        {
            case '+':
                printf("3.3");
                break;
            case '0':
                printf("3.0");
                break;
            case '-':
                printf("2.7");
                break;
        }
    }
    else if(score[0] == 'C')
    {
        switch(score[1])
        {
            case '+':
                printf("2.3");
                break;
            case '0':
                printf("2.0");
                break;
            case '-':
                printf("1.7");
                break;
        }
    }
    else if(score[0] == 'D')
    {
        switch(score[1])
        {
            case '+':
                printf("1.3");
                break;
            case '0':
                printf("1.0");
                break;
            case '-':
                printf("0.7");
                break;
        }
    }
    else
        printf("0.0");
}