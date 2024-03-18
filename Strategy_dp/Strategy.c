#include <stdio.h>
#include "Strategy.h"

void strategy_move(Strategy* str, Vector* vec, Material* mtrl){

    str->operations->planMovement(str, vec, mtrl);
}

void strategy_deconstruct(Strategy* str){

    str->operations->deconstruct(str);
}
