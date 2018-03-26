#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

Vector::Vector()
{
    set_x(0);
    set_y(0);
}

Vector::Vector(double x, double y)
{
    set_x(x);
    set_y(y);
}

Vector::~Vector() {}

void Vector::set_x(double x)
{
    _x = x;
}

void Vector::set_y(double y)
{
    _y = y;
}

double Vector::get_x()
{
    return _x;
}

double Vector::get_y()
{
    return _y;
}

double Vector::lenght()
{
    return sqrt(pow(_x,2) + pow(_y,2));
}

void Vector::show()
{
    cout << "x = " << _x << "; y = " << _y << endl;
}


Vector Vector::operator -()
{
    return Vector(-_x, -_y);
}

Vector Vector::operator *(double k)
{
    return Vector(k*_x, k*_y);
}

Vector operator -(Vector a, Vector b)
{
    return Vector(a.get_x() - b.get_x(), a.get_y() - b.get_y());
}

Vector Vector::operator +=(Vector a)
{
    _x += a.get_x();
    _y += a.get_y();
}

