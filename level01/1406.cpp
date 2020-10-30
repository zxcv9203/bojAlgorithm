#include <cstdio>
#include <list>

using namespace std;
int main(void)
{
    list<char> edit;
    list<char>::iterator cur;
    char str[100001];
    int n;
    char c;
    scanf("%s %d", str, &n);
    for(int i = 0; str[i]; i++)
        edit.push_back(str[i]);
    cur = edit.end();
    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &c);
        if(c == 'L')
        {
            if(cur != edit.begin())
                cur--;
        }
        else if(c == 'D')
        {
            if(cur != edit.end())
                cur++;
        }
        else if(c == 'B')
        {
            if(cur != edit.begin())
            {
                cur--;
                cur = edit.erase(cur);
            }
        }
        else if(c == 'P')
        {
            scanf(" %c", &c);
            edit.insert(cur, c);
        }
    }
    for(auto x: edit)
        printf("%c", x);
}
