#include <iostream>
#include "v3d.h"
#include "named.h"
#include "list.h"
using namespace std;


int main()
{
    AbstractVector* aq = new Named ("kek", 0, 1);
    AbstractVector* bq = new V3d (3, 1, 2);
    AbstractVector* cq = new Vector (1, 2);
    /*Node<AbstractVector> node(aq);
    node.set_link(bq);
    node.show();
    node._link_next->show();*/

    List<AbstractVector> list(aq);

    //list.push(aq);
    list.cnt();
    list.pull();
    list.pull_link();
    list.cnt();
    cout << endl;

    list.push(bq);
    list.cnt();
    list.pull();
    list.pull_link();
    list.cnt();
    cout << endl;

    list.push(cq);
    list.cnt();
    list.pull();
    list.pull_link();
    list.cnt();
    cout << endl;

/*    AbstractVector* aq = new Vector (0, 1);
    aq->show();
    //Vector bq = Named ("fff", 5, 1);
    //Vector cq = V3d (0, 1, 9);

    List<AbstractVector> list;
    list.push(aq);
    list.pull();
*/
/*
    list.push(Named ("qee", 3, 4));
    list.pull();

    list.push(V3d (2, 4, 4));
    list.pull();
*/
    return 0;
}
