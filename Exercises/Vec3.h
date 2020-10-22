#pragma once

using namespace std;

class Vec3
{
public:

	Vec3();
	Vec3(int x, int y, int z);
	Vec3(const Vec3& anotherVec3);
	~Vec3();

	void Normalize();
	Vec3& distanceTo(Vec3&);
	Vec3& dot_product(Vec3&);
	Vec3& cross_product(Vec3&);
	Vec3& angle_between(Vec3&);

private:
	int* elementsInVector;
	float* vectorNormalized;
};

