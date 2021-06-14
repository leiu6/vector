#include "vector.h"

typedef struct {
    vect v1;
    vect v2;
    vect v3;
} tri;

int isEquilateral (tri input) {
    vect s1, s2, s3;
    
    s1.x = input.v1.x - input.v2.x;
    s1.y = input.v1.y - input.v2.y;
    s1.z = input.v1.z - input.v2.z;
    
    s2.x = input.v2.x - input.v3.x;
    s2.y = input.v2.y - input.v3.y;
    s2.z = input.v2.z - input.v3.z;
    
    s3.x = input.v3.x - input.v1.x;
    s3.y = input.v3.y - input.v1.y;
    s3.z = input.v3.z - input.v1.z;
    
    float angleV1 = angl(s1, s3);
    float angleV2 = angl(s1, s2);
    float angleV3 = angl(s2, s3);
    
    if ((angleV1 == angleV2 && angleV2 == angleV3) && angleV1 == angleV3) {
        return 1;
    }
    else {
        return 0;
    }
}