#pragma once
#include <iostream>

class Vec3
{
public:

	Vec3() : x(0), y(0), z(0) {}
	Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	Vec3(const Vec3& anotherVec3) : x(anotherVec3.x), y(anotherVec3.y), z(anotherVec3.z) {}

	Vec3& operator+(const Vec3& anotherVec3) { x = x + anotherVec3.x; y = y + anotherVec3.y; z = z + anotherVec3.z; return *this; }
	friend ostream& operator<<(ostream& os, const Vec3& anotherVec3) { return os << "(" << anotherVec3.x << ", " << anotherVec3.y << ", " << anotherVec3.z << ")"; }

	const Vec3 Normalize();
	const float distanceTo(const Vec3& anotherVec3);
	const float dot_product(const Vec3& anotherVec3);
	const Vec3 cross_product(const Vec3& anotherVec3);
	const float angle_between(const Vec3& anotherVec3);

	float getX() { return x; }
	float getY() { return y; }
	float getZ() { return z; }

private:
	float x, y, z;
};

