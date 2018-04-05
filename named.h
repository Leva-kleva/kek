#ifndef NAMED_H
#define NAMED_H

#include "vector.h"

class Named: public Vector
{
    private:
        char _name[80];
    public:
        Named(): Vector() { set_name(""); }
        Named(char* s): Vector() { set_name(s); }
        Named(char* s, double x, double y): Vector(x, y) { set_name(s); }
        ~Named();

        void set_name(char* s);
        char* get_name();

        void show();
        char operator [](int i);
};

#endif // NAMED_H
