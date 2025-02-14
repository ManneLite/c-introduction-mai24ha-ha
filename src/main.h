#include <stdint.h> // #include <> letar efter någon form av modul

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef struct Entity
{
    u32 hp;
    u32 attack;
    u32 defense;
} Entity;

typedef struct SpecialMonster
{
    u32 hp;
    u32 attack;
    u32 extra_attack;
} SpecialMonster;
