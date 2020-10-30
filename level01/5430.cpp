#include <cstdio>
#include <deque>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    int t;
    short reverse;
    char p[100001];
    char str[500001];
    deque<int> dq;
    int len;

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        reverse = -1;
        scanf("%s", p);
        scanf("%d", &len);
        scanf("%s", str);
        char *tok = strtok(str, "[,]");
        while(tok)
        {
            dq.push_back(stoi(tok));
            tok = strtok(NULL, "[,]");
        }
        for(int j = 0; p[j]; j++)
        {
            if(p[j] == 'R')
                reverse *= -1;
            if(p[j] == 'D')
            {
                if(dq.empty())
                {
                    printf("error\n");
                    reverse = 0;
                    break ;
                }
                if(reverse == 1)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        if(reverse != 0)
        {
            printf("[");
            while(!dq.empty())
            {

                if(reverse == 1)
                {
                    printf("%d", dq.back());
                    if(dq.size() > 1)
                        printf(",");
                    dq.pop_back();
                }
                else
                {
                    printf("%d", dq.front());
                    if(dq.size() > 1)
                        printf(",");
                    dq.pop_front();
                }
            }
            printf("]\n");
        }
        while(!dq.empty())
            dq.pop_front();
    }
}
