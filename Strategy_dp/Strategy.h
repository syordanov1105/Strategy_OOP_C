#ifndef STRATEGY_H
#define STRATEGY_H
#include "Vector.h"
#include "Material.h"

typedef struct Strategy Strategy;

typedef struct{

    Vector* (*planMovement)(Strategy*, Vector*, Material*);
    void (*deconstruct)(Strategy*);

}StrategyInterface;

struct Strategy{

    const StrategyInterface* operations;

};

void strategy_move(Strategy*, Vector*, Material*);
void strategy_deconstruct(Strategy*);

#endif // STRATEGY_H
