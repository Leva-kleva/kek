#ifndef VECTOR_H
#define VECTOR_H

#include "abstractvector.h"

class Vector: public AbstractVector
{
    private:
        friend Vector operator -(Vector a, Vector b);
    protected:
        double _x;
        double _y;
    public:
        Vector();
        Vector(double x, double y);
        ~Vector();

        void set_x(double x);
        void set_y(double y);
        double get_x();
        double get_y();

        double lenght();
        void show();
        Vector operator -();
        Vector operator *(double k);
        Vector operator +=(Vector a);
};

#endif // VECTOR_H
