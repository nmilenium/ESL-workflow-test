#include "vector.h"

struct Vector vector_sum(struct Vector a, struct Vector b)
{
    return (struct Vector){a.x + b.x, a.y + b.y, a.z + b.z};
}

struct Vector vector_sub(struct Vector a, struct Vector b)
{
    return (struct Vector){a.x - b.x, a.y - b.y, a.z - b.z};
}
