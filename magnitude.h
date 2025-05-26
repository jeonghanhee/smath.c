#ifndef MAGNITUDE_H
#define MAGNITUDE_H

#include "math.h"
#include "vector.h"

float magnitude2(vector2 v) {
    return sqrtf(v.x * v.x + v.y * v.y);
}

float magnitude3(vector3 v) {
    return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

#endif