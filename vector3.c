#include "vector3.h"

Vector3 vector3_sum(Vector3 a, Vector3 b){
    Vector3 result;
    
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    
    return result;
}

Vector3 vector3_sub(Vector3 a, Vector3 b){
    Vector3 result;
    
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    
    return result;
}

float vector3_dot(Vector3 a, Vector3 b){
    return a.x*b.x + a.y*b.y + a.z*b.z;
}