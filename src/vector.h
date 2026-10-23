#ifndef VECTOR_H
#define VECTOR_H

struct Vector {
    float x;
    float y;
    float z;
};

struct Vector vector_sum(struct Vector a, struct Vector b);
struct Vector vector_sub(struct Vector a, struct Vector b);
struct Vector vector_cross(struct Vector a, struct Vector b);
double vector_dot(struct Vector a, struct Vector b);

#endif
