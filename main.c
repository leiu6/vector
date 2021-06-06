#include <stdio.h>
#include <math.h>
#include "vector.h"

int main() {
    vect a, b;

    a.x = 1;
    a.y = 0;
    a.z = 0;

    b.x = 0;
    b.y = 1;
    b.z = 0;

    float angle = angl(a, b);

    angle *= 180 / 3.1415;

    printf("%f\n", angle);
    return 0;
}
