#include <stdio.h>
#include "vector.h"

int main()
{
    struct Vector a = {1.0f, 2.0f, 3.0f};
    struct Vector b = {4.0f, 5.0f, 6.0f};

    printf("Вектор A: (%.1f, %.1f, %.1f)\n", a.x, a.y, a.z);
    printf("Вектор B: (%.1f, %.1f, %.1f)\n\n", b.x, b.y, b.z);

    struct Vector sum = vector_sum(a, b);
    printf("Сложение (Sum): (%.1f, %.1f, %.1f)\n", sum.x, sum.y, sum.z);

    struct Vector sub = vector_sub(a, b);
    printf("Вычитание (Sub): (%.1f, %.1f, %.1f)\n", sub.x, sub.y, sub.z);

    struct Vector cross = vector_cross(a, b);
    printf("Векторное произведение (Cross): (%.1f, %.1f, %.1f)\n", cross.x, cross.y, cross.z);

    double dot = vector_dot(a, b);
    printf("Скалярное произведение (Dot): %.2f\n", dot);

    return 0;
}
