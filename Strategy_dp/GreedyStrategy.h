#ifndef GREEDYSTRATEGY_H
#define GREEDYSTRATEGY_H
#include "Strategy.h"
typedef struct{

    Strategy strBase;

    //HumbleStrategy specifics

}GreedyStrategy;

Vector* greedy_str_move(Strategy* str, Vector* vec, Material* mtrl);

Strategy* greedy_str_construct();

void greedy_str_deconstruct(Strategy* str);

#endif // GREEDYSTRATEGY_H
