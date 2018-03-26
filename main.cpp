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

   // Node<AbstractVector> list = vector[0];
   // List<AbstractVector> list(*vector[0]);
   // cout << list.get_cnt();
   // list.push(*vector[1]);
   // cout << list.get_cnt();

   /*Vector a(0,1), b(2, 3);
    Node<Vector> one = Vector (0, 1);
    Node<Vector> two = Vector (2, 3);
    Node<Vector> three = Vector (3, 45);
    one._link_next = &two;
    two._link_next = &three;
    three._link_next = &one;*/

    //Node<Vector> liset = Vector();
    //Node<Vector> list(Vector(0,1));
    //list.cnt();

    //Node<Vector> liset();
    Vector a(1,1), b(2,3);
    List<Vector> list(a);
    list.cnt();
    list.pull();

    list.push(b);
    list.cnt();
    list.pull();

    list.push(Vector(4,3));
    list.cnt();
    list.pull();

    return 0;
}
