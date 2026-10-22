#include <stdio.h>
#include "vector3.h"

int main(void)
{
    Vector3 a = {1.0f, 2.0f, 3.0f};
    Vector3 b = {4.0f, 5.0f, 6.0f};

    Vector3 result = vector3_sum(a, b);

    printf("Result: (%.2f, %.2f, %.2f)\n",
           result.x, result.y, result.z);

    return 0;
}