#ifndef STRUCT_ENUM
#define STRUCT_ENUM

#include <stdio.h>
#include <string.h>
typedef struct Player Player;
struct Player
{
    char nom[100];
    int age;
};
typedef enum Volume Volume;
enum Volume
{
    MUET=0, FAIBLE=10, MOYEN=50, FORT=100
};
#endif