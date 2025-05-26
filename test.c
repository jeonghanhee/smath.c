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

    copy_v2(&pos, &pos2);
    printf("copy_v2: (x=%f,y=%f)\n", pos2.x, pos2.y);
    

    // normalize
    vector2 n_pos = normalize2(pos);

    printf("normalize2: (x=%f,y=%f)\n", n_pos.x, n_pos.y);

    vector3 pos3;
    pos3.x = 12030;
    pos3.y = 9372;
    pos3.z = -301223;
    
    vector3 n3_pos = normalize3(pos3);
    printf("normalize3: (x=%f,y=%f,z=%f)\n", n3_pos.x, n3_pos.y, n3_pos.z);

    printf("magnitude2: %f\n", magnitude2(pos2));
    printf("magnitude3: %f\n", magnitude3(pos3));

    return 0;
}