#include <iostream>
#include <cstdlib>
#include <cmath>
#include "vector.cpp"
#include "named.h"
//#include "v3d.cpp"
#include <fstream>
//using namespace std;

int main()
{
    Vector a(0,2);
    a.show();
    //V3d a(0, 2, 3);
    //cout<< a.get_z();
    //задача "о хождение по плоскости"
    /*ofstream fout("cord.txt");
    Vector v(0, 0);
    double step = 1;
    int cnt = 0;
    fout << 0 << " " << 0 << endl;
    while (v.lenght() < 50)
        {
            double deg = ((double) rand() / RAND_MAX) * M_PI * 2;
            Vector tmp(step*cos(deg), step*sin(deg));
            v += tmp;
            cnt += 1;
            fout << v.get_x() << " " << v.get_y() << endl;
        }
    v.show();
    cout << v.lenght() << endl;
    cout << cnt;
    fout.close();*/
    return 0;
}
