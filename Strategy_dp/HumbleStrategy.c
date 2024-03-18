#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "HumbleStrategy.h"

void humble_str_deconstruct(Strategy* str){

    HumbleStrategy* humbleStrategy = (HumbleStrategy*)str;
    free(humbleStrategy);

    printf("Humble strategy deconstructed!\n");
}

Vector* humble_str_move(Strategy* str, Vector* vec, Material* mtrl){

    static Vector* v;
    v = vec;

    printf("Humble movement!\n");

    return v;
}

Strategy* humble_str_construct(){

    static const StrategyInterface operations = {humble_str_move, humble_str_deconstruct};
    static Strategy strBase;
    strBase.operations = &operations;

    HumbleStrategy* humbleStrategy = malloc(sizeof(*humbleStrategy));
    memcpy(&humbleStrategy->strBase, &strBase, sizeof(strBase));

    return (Strategy*)(&humbleStrategy->strBase);

}
