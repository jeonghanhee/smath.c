#include <stdio.h>
#include "smath.h"

int main(void) {
    vector2 pos;
    pos.x = 3;
    pos.y = 1;

    vector2 pos2;
    pos.x = 9;
    pos.y = 4;

    printf("%f\n", distance2(pos, pos2));
}