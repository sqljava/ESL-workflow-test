#include <stdio.h>
#include "vector3.h"

int main(void)
{
    Vector3 a = {1.0f, 2.0f, 3.0f};
    Vector3 b = {4.0f, 5.0f, 6.0f};

    Vector3 res_sum = vector3_sum(a, b);
    printf("Result of sum: (%.2f, %.2f, %.2f)\n",
        res_sum.x, res_sum.y, res_sum.z);

    Vector3 res_sub = vector3_sub(a, b);
    printf("Result of sub: (%.2f, %.2f, %.2f)\n",
        res_sub.x, res_sub.y, res_sub.z);
    

    return 0;
}