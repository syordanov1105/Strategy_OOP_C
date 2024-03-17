#ifndef STRATEGY_H
#define STRATEGY_H
#include "Material.h"

typedef struct Strategy Strategy;

typedef struct{

    int (*planMovement)(int*, Material*);

}StrategyInterface;

void strategy_move(Strategy*, int* , Material*);


#endif // STRATEGY_H
