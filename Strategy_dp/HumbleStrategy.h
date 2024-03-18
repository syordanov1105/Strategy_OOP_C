#ifndef HUMBLESTRATEGY_H
#define HUMBLESTRATEGY_H
#include "Strategy.h"

typedef struct{

    Strategy strBase;

    //HumbleStrategy specifics

}HumbleStrategy;

Vector* humble_str_move(Strategy* str, Vector* vec, Material* mtrl);

Strategy* humble_str_construct();

void humble_str_deconstruct(Strategy* str);


#endif // HUMBLESTRATEGY_H
