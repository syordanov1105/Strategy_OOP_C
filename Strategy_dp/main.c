#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
int main()
{
    Player player1;
    Strategy* strategy1 = humble_str_construct();
    Strategy* strategy2 = greedy_str_construct();

    player1.strategy = strategy1;//Default strategy

    int stepsToSimulate = 5;//It is about testing (each step can be different strategy)

    while(stepsToSimulate >= 0){

        if(stepsToSimulate == 1){ //Last 2 steps should be greedy
            player1.strategy = strategy2;
        }

        simulateStep(&player1);

        stepsToSimulate--;
    }

    printf("\n\n");

    strategy_deconstruct(strategy1);
    strategy_deconstruct(strategy2);

    return 0;
}
