// includes
// stdlib
// structs
// minne
// void *

#include "main.h" // #include "" pekar på någon fil som vi har
#include <stdio.h>
#include <stdlib.h>

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

void
print_byte_count(size_t size, u64 count, u64 padding)
{
    //u64 just_to_take_space;
    printf("byte count: %lld\n", size * count + padding);
}

int main()
{
    //Entity player = {}; // 12
    //player.hp = 100;
    //player.attack = 10;
    //player.defense = 5;

    // en *p => &address  ram_minne[32GB], *p == ett index
    // u8 *p => &address i vårt minne, och om vi printf(*p) 1 byte stor
    // u32 *p => &address i vårt minne, och om vi printf(*p) 4 bytes stor
    // void *p => &address i vårt minne,

    void *storage = calloc(gigabyte(4), 1);

    u64 monster_count = 1000000; 

    Entity *monsters = storage; 

    Entity *monster = monsters;
    for(void *end = &monsters[monster_count]; monster != end; ++monster)
    {
        monster->hp = 150;
    }

    for(int i = 0; i < monster_count; ++i)
    {
        monsters[i].hp = 150;
    }

    printf("sizeof Entity: %lld bytes\n", sizeof(Entity)); // 12
    printf("sizeof monsters: %lld bytes\n", sizeof(monsters)); // 12 * monster_count
                                                               //
    printf("monster nr 980132's hp is: %d", monsters[980132].hp);

    // 1 200 012 bytes av data
    // gränsen just nu ligger mellan 120 012 och 1 200 012

}
