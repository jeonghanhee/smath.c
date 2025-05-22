#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

typedef struct {
    double x;
    double y;
} vector2;

typedef struct {
    double x;
    double y;
    double z;
} vector3;

static void copy_v2(vector2 *o, vector2 *c) {
    (*c).x = (*o).x;
    (*c).y = (*o).y;
}

static void copy_v3(vector3 *o, vector3 *c) {
    (*c).x = (*o).x;
    (*c).y = (*o).y;
    (*c).z = (*o).z;
}

#endif