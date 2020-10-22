#include <iostream>
#include "Vec3.h"

using namespace std;


Vec3& Vec3::Normalize()
{
	float magnitud = sqrt((x * x) + (y * y) + (z * z));
	return *new Vec3(x / magnitud, y / magnitud, z / magnitud);
}

float Vec3::distanceTo(const Vec3& anotherVec3)
{
	return sqrt(((x - anotherVec3.x) * (x - anotherVec3.x)) + ((y - anotherVec3.y) * (y - anotherVec3.y)) + ((z - anotherVec3.z) * (z - anotherVec3.z)));
}

float Vec3::dot_product(const Vec3& anotherVec3)
{
	return (x*anotherVec3.x)+ (y * anotherVec3.y) + (z * anotherVec3.z);
}

Vec3& Vec3::cross_product(const Vec3& anotherVec3)
{
	return *new Vec3(((y*anotherVec3.z)-(z*anotherVec3.y)), ((z * anotherVec3.x) - (x * anotherVec3.z)), ((x * anotherVec3.y) - (y * anotherVec3.x)));
}

float Vec3::angle_between(const Vec3& anotherVec3)
{
	return acos(dot_product(anotherVec3) / sqrt((x * x + y * y + z * z) * (anotherVec3.x * anotherVec3.x + anotherVec3.y * anotherVec3.y + anotherVec3.z * anotherVec3.z)));
}
