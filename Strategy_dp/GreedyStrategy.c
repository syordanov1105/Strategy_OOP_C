#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GreedyStrategy.h"

void greedy_str_deconstruct(Strategy* str){

    GreedyStrategy* greedyStrategy = (GreedyStrategy*)str;
    free(greedyStrategy);

    printf("Greedy strategy deconstructed!\n");
}

Vector* greedy_str_move(Strategy* str, Vector* vec, Material* mtrl){

    static Vector* v;
    v = vec;

    printf("Greedy movement!\n");

    return v;
}

Strategy* greedy_str_construct(){

    static const StrategyInterface operations = {greedy_str_move, greedy_str_deconstruct};
    static Strategy strBase;
    strBase.operations = &operations;

    GreedyStrategy* greedyStrategy = malloc(sizeof(*greedyStrategy));
    memcpy(&greedyStrategy->strBase, &strBase, sizeof(strBase));

    return (Strategy*)(&greedyStrategy->strBase);

}
