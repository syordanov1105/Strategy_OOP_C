#include <stdio.h>
#include <stdlib.h>
#include "Material.h"

struct Material{

    float quantity;
};

float getQuantity(Material *material){

    return material->quantity;
}
