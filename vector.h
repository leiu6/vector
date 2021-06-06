typedef struct {
    float x;
    float y;
    float z;
} vect;

float magn (vect input) {
    return sqrt(pow(input.x, 2) + pow(input.y, 2) + pow(input.z, 2));
}

vect norm (vect input) {
    float magnitude = magn (input);

    input.x /= magnitude;
    input.y /= magnitude;
    input.z /= magnitude;

    return input;
}

float dot (vect a, vect b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

vect cross (vect a, vect b) {
    vect output;

    output.x = a.y * b.z - a.z * b.y;
    output.y = a.x * b.z - a.z * b.x;
    output.z = a.x * b.y - a.y * b.x;

    return output;
}

float angl (vect a, vect b) {
    return acos(dot(a, b) / (magn(a) * magn(b)));
}