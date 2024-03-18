#include <stdio.h>
#include "Player.h"

void simulateStep(Player* player){

    strategy_move(player->strategy, player->playerCoords, player->materials);

}
