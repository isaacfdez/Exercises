#include <iostream>
#include "Vec3.h"

using namespace std;

int main()
{
    Vec3 a = *new Vec3();
    Vec3 b = *new Vec3(1, 0, 1);
    Vec3 c = *new Vec3(b);
    Vec3 d = b + c;
    Vec3 e = *new Vec3(-1, 0, -1);
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    cout << "Normalize b: " << b.Normalize() << endl;
    cout << "Distance from b to d: " << b.distanceTo(d) << endl;
    cout << "Dot product of b and d: " << b.dot_product(d) << endl;
    cout << "Cross product of b and e: " << b.cross_product(e) << endl;
    cout << "Angle between b and e: " << b.angle_between(e) << endl;

    return 0;
}