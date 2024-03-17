#include <stdio.h>
#include <stdlib.h>
#include "Strategy.h"
#include "HumbleStrategy.h"
#include "Material.h"

int main()
{
    Strategy* strategy = humbleStrategy_create();
    Material* material;
    int coords[3] = {1,2,3};

    strategy_move(strategy,coords, material);
    return 0;
}
