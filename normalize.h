#ifndef NORMALIZE_H
#define NORMALIZE_H

#include "vector.h"
#include "math.h"

static vector2 normalize2(vector2 vec) {
    double _u = sqrt((vec.x * vec.x) + (vec.y * vec.y));
    vector2 nv;

    nv.x = vec.x / _u;
    nv.y = vec.y / _u;

    return nv;
}

static vector3 normalize3(vector3 vec) {
    double _u = sqrt((vec.x * vec.x) + (vec.y * vec.y) + (vec.y * vec.y));
    vector3 nv3;

    nv3.z = nv3.x = (vec.x / _u);
    nv3.y = vec.y / _u;

    return nv3;
}   

#endif