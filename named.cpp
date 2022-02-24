#include <iostream>
#include "cstring"
#include "named.h"

using namespace std;


Named::~Named()
{
    delete[] _name;
}

void Named::set_name(char* s)
{
    strcpy(_name, s);
}

char* Named::get_name()
{
    return _name;
}

void Named::show()
{
    cout << get_name() << "; " << get_x() << "; " << get_y() << endl;
}

char Named::operator [](int i)
{
    if (i < strlen(get_name())) return get_name()[i];
    else return '!';
}
