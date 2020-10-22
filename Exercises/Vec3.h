#pragma once
#include <iostream>

using namespace std;

class Vec3
{
public:

	inline Vec3() : x(0), y(0), z(0) {}
	inline Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	inline Vec3(const Vec3& anotherVec3) { x = anotherVec3.x; y = anotherVec3.y; z = anotherVec3.z; }
	inline ~Vec3() {}

	inline Vec3& operator+(const Vec3& anotherVec3) { return *new Vec3(x+anotherVec3.x, y + anotherVec3.y, z + anotherVec3.z); }
	inline friend ostream& operator<<(ostream& os, const Vec3& anotherVec3) { return os << "(" << anotherVec3.x << ", " << anotherVec3.y << ", " << anotherVec3.z << ")"; }

	Vec3& Normalize();
	float distanceTo(const Vec3& anotherVec3);
	float dot_product(const Vec3& anotherVec3);
	Vec3& cross_product(const Vec3& anotherVec3);
	float angle_between(const Vec3& anotherVec3);

private:
	float x, y, z;
};

