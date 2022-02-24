#include <iostream>
#include "v3d.h"

using namespace std;


void V3d::set_z(double z)
{
    _z = z;
}

double V3d::get_z()
{
    return _z;
}

void V3d::show()
{
    cout << get_x() << "; " << get_y() << "; " << get_z() << endl;
}
