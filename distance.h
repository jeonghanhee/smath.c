#ifndef DISTANCE_H
#define DISTANCE_H

#include <math.h>
#include "vector.h"

static double distance2(vector2 to, vector2 from) {
    double a = pow(from.x - to.x, 2);
    double b = pow(from.y - to.y, 2);

    return sqrt(a + b);
}

static double distance3(vector3 to, vector3 from) {
    double a = pow(from.x - to.x, 2);
    double b = pow(from.y - to.y, 2);
    double c = pow(from.z - to.z, 2);

    return sqrt(a + b + c);
}

#endif