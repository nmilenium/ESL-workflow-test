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
    return (struct Vector){a.y * a.z - b.z * b.y, a.x * a.z - b.z * b.x, a.x * a.y - b.y * b.x};
}
