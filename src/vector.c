#include "vector.h"

struct Vector vector_sum(struct Vector a, struct Vector b)
{
    return (struct Vector){a.x + b.x, a.y + b.y, a.z + b.z};
}

struct Vector vector_sub(struct Vector a, struct Vector b)
{
    return (struct Vector){a.x - b.x, a.y - b.y, a.z - b.z};
}

struct Vector vector_cross(struct Vector a, struct Vector b)
{
    return (struct Vector){a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x};
}

double vector_dot(struct Vector a, struct Vector b)
{
    return (double)(a.x * b.x + a.y * b.y + a.z * b.z);
}
