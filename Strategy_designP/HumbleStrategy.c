#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "HumbleStrategy.h"
#include "Strategy.h"

struct HumbleStrategy{
    Strategy* strategy;

    //HumbleStrategy specifics
};

int *humbleMovement(int *playerCoords, Material *materials){
    static int *arr;
    arr = playerCoords;

    //Algorithm for movement

    printf("Humble movement!");

    return arr;
}

Strategy* humbleStrategy_create(){

    static const StrategyInterface options = {humbleMovement};
    static Strategy* base = {&options};

    HumbleStrategy *humbleStrategy = malloc(sizeof(*humbleStrategy));
    memcpy(&humbleStrategy->strategy, &base, sizeof(base));

    return (Strategy*)(&humbleStrategy->strategy);
}
