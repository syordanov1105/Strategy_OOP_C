#ifndef HUMBLESTRATEGY_H
#define HUMBLESTRATEGY_H
#include "Material.h"
#include "Strategy.h"

typedef struct HumbleStrategy HumbleStrategy;

int *humbleMovement(int*, Material*);

Strategy* humbleStrategy_create();

#endif // HUMBLESTRATEGY_H
