#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class data_type>
class Node
{
    public:
        data_type _data;
        Node<data_type>* _link_next;
        //Node<data_type>* _link_head;
        int _cnt;

        Node()
        {
            //std::cout<<"one";
            _data = NULL;
            _link_next = NULL;
            _cnt = 0;
        }

        Node(data_type data)
        {
            //std::cout<<"two";
            _data = data;
            _link_next = NULL;
            //_cnt = 0;
        }

        ~Node(){}

       /* void push(data_type data)
        {
            Node<data_type> node = data;
            _link_next = &node;
            _data = _link_next;
            _cnt += 1;
        }

        void cnt()
        {
            //return _cnt;
            std::cout << _cnt;
        }*/

        void show()
        {
            _data.show();
        }
};

#endif // NODE_H
