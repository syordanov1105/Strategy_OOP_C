#include <stdio.h>
#include <stdlib.h>
#include "Strategy.h"

struct Strategy{

    const StrategyInterface* const options;

};

void strategy_move(Strategy *strategy, int* playerCoords, Material* materials){

    strategy->options->planMovement(playerCoords, materials);
}
