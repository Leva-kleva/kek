#include <iostream>
#include "v3d.h"
#include "named.h"
#include "vector.h"
#include "list.h"
#include "node.h"
#include "abstractvector.h"
using namespace std;

int main()
{

    AbstractVector *vector[4];

    vector[0] = new Vector (0,1);
    vector[1] = new Named ("qfe", 3, 4);
    vector[2] = new V3d (1, 3, 4);
    vector[3] = new Vector (12, 9);
//
    Vector a(1,1), b(2,3);
    List<Vector> list(a);
    list.cnt();
    list.pull();
 cout << '\n';
    list.push(b);
    list.cnt();
    list.pull();
 cout << '\n';
    list.push(Vector(4,3));
    list.cnt();
    list.pull();
 cout << '\n';
    list[0];
    list[1];
    //list[2];
    cout << '\n';

    Node<Vector>* cur;
    Node<Vector> n1(Vector (0, 1));
    Node<Vector> n2(Vector (1, 9));
    Node<Vector> n3(Vector (31, 39));
    n1._link_next = &n2;
    n2._link_next = &n3;
    n3._link_next = &n1;
    cur = &n1;
    cur->show();
    cur = &n2;
    cur->show();
    cur = n3._link_next;
    cur->show();
}
