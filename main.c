#include <stdio.h>
#include <math.h>
#include "shape.h"

int main() {
    tri test;

    // simple equilateral triangle in the xy plane
    test.v1.x = 0;
    test.v1.y = 0;
    test.v1.z = 0;

    test.v2.x = 1;
    test.v2.y = 0;
    test.v2.z = 0;

    test.v3.x = 0.5;
    test.v3.y = sqrt(3) / 2;
    test.v3.z = 0;

    int equil = isEquilateral(test); // will return 1 since the triangle is equilateral

    printf("%i\n", equil);
    return 0;
}
