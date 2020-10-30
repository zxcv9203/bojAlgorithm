#include <stdio.h>

typedef struct  t_spec
{
    int hp;
    int mp;
    int damage;
    int defense;
}               spec;
int main(void)
{
    int n;
    spec ch;
    spec eq;
    int power;

    scanf("%d", &n);
    

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d", 
            &ch.hp, &ch.mp, &ch.damage, &ch.defense, &eq.hp, &eq.mp, &eq.damage, &eq.defense);
        ch.hp += eq.hp;
        ch.mp += eq.mp;
        ch.damage += eq.damage;
        ch.defense += eq.defense;
        if(ch.hp <= 0)
            ch.hp = 1;
        if(ch.mp <= 0)
            ch.mp = 1;
        if(ch.damage < 0)
            ch.damage = 0;
        power = 1 * ch.hp + 5 * ch.mp + 2 * ch.damage + 2 * ch.defense;
        printf("%d\n", power);
    }
}