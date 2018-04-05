#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class data_type>
class Node
{
    public:
        data_type* _data;
        Node<data_type>* _link_next;

        Node()
        {
            _data = NULL;
            _link_next = NULL;
        }

        Node(data_type* data)
        {
            _data = data;
            _link_next = NULL;
        }

        ~Node(){}

        void set_link(data_type* kek)
        {
            Node<data_type> node(kek);
            _link_next = &node;
        }

        void show()
        {
            _data->show();
        }
};

#endif // NODE_H
