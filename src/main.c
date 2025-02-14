// includes
// stdlib
// structs
// minne
// void *

#include "main.h" // #include "" pekar på någon fil som vi har
#include <stdio.h>

#if 1
void
player_init(Entity *player, u32 hp, u32 attack, u32 defense)
{
    printf("print 1 player hp is: %d\n", player->hp); // 50
    player->attack = attack;
    player->hp = hp;
    player->defense = defense;
    printf("print 2 player hp is: %d\n", player->hp); // 100
}

#else
void
player_init(Player player, u32 hp, u32 attack, u32 defense)
{
    printf("print 1 player hp is: %d\n", player.hp); // 50
    player.hp = hp;
    player.attack = attack;
    player.defense = defense;
    printf("print 2 player hp is: %d\n", player.hp); // 100
}
#endif

int main()
{
    Entity player = {};
    player.hp = 100;
    player.attack = 10;
    player.defense = 5;

    Entity monsters[100] = {};

    Entity *monster = monsters;
    for(void *end = &monsters[100]; monster != end; ++monster)
    {
        monster->hp = 150;
    }

    for(int i = 0; i < 100; ++i)
    {
        monsters[i].hp = 150;
    }


}
