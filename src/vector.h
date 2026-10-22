#ifndef VECTOR_H
#define VECTOR_H

struct Vector {
    float x;
    float y;
    float z;
};

struct Vector vector_sum(Vector a, Vector b);
struct Vector vector_sub(Vector a, Vector b);
struct Vector vector_cross(Vector a, Vector b);
double vector_dot(Vector a, Vector b);

#endif
