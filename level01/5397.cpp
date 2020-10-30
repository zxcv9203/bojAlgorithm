#include <cstdio>
#include <list>

using namespace std;

void ft_keyloger(char *str)
{
    list<char> v;
    int i;
    list<char>::iterator cur = v.begin();

    i = 0;
    while (str[i])
    {
        if(str[i] == '<')
        {
            if(cur != v.begin())
                cur--;
        }
        else if(str[i] == '>')
        {
            if(cur != v.end())
                cur++;
        }
        else if(str[i] == '-')
        {
            if(cur != v.begin())
            {
                cur--;
                v.erase(cur++);
            }
        }
        else
            v.insert(cur, str[i]);
        i++;
    }
    for(auto i : v)
        printf("%c", i);
    puts("");
}

int main(void)
{
    char str[1000001];
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        ft_keyloger(str);
    }
}
