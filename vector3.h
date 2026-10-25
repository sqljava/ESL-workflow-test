#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct{
    float x;
    float y;
    float z;
}Vector3;

Vector3 vector3_sum(Vector3 a, Vector3 b);
Vector3 vector3_sub(Vector3 a, Vector3 b);
float vector3_dot(Vector3 a, Vector3 b);
Vector3 vector3_cross(Vector3 a, Vector3 b);

#endif