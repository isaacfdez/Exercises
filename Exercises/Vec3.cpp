#include "Vec3.h"

Vec3::Vec3()
{
	elementsInVector = new int[0];
	vectorNormalized = new float[0];
}

Vec3::Vec3(int x, int y, int z)
{
	elementsInVector = new int[x, y, z];
	vectorNormalized = new float[0];
}

Vec3::Vec3(const Vec3& anotherVec3)
{
	elementsInVector = anotherVec3.elementsInVector;
	vectorNormalized = anotherVec3.vectorNormalized;
}

Vec3::~Vec3()
{
}

void Vec3::Normalize()
{
}

Vec3& Vec3::distanceTo(Vec3& anotherVec3)
{
	return *this;
}

Vec3& Vec3::dot_product(Vec3& anotherVec3)
{
	return *this;
}

Vec3& Vec3::cross_product(Vec3& anotherVec3)
{
	return *this;
}

Vec3& Vec3::angle_between(Vec3& anotherVec3)
{
	return *this;
}
