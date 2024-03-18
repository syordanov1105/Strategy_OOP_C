#ifndef PLAYER_H
#define PLAYER_H
#include "Strategy.h"

typedef struct{

    Strategy* strategy;
    Vector* playerCoords;
    Material materials[];
    //Player specifics

}Player;

void simulateStep(Player*);

#endif // PLAYER_H
