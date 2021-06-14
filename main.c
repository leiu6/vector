#include <stdio.h>
#include <math.h>
#include "shape.h"

int main() {
    vect i = unit('k');

    printf("%f, %f, %f\n", i.x, i.y, i.z);
    return 0;
}
