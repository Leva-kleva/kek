#ifndef V3D_H
#define V3D_H

#include "vector.h"

class V3d: public Vector
{
    protected:
        double _z;
    public:
        V3d(): Vector() { set_z(0); }
        V3d(double x, double y, double z): Vector(x, y) { set_z(z); }
        ~V3d() {}

        void set_z(double z);
        double get_z();

        void show();
};

#endif // V3D_H
