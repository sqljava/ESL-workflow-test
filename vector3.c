#include "vector3.h"

Vector3 vector3_sum(Vector3 a, Vector3 b){
    Vector3 result;
    
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    
    return result;
}