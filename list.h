#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"

using namespace std;

template <class data_type>
class List
{
    public:
        Node<data_type>* _link_current;
        int _cnt;
        /*List()
        {
            Node<data_type> node = NULL;
            _link_start = NULL;
            _link_end = NULL;
            _cnt = 0;
        }*/

        List(data_type data)
        {
            Node<data_type> node(data);
            //node._data = data;
            node._link_next = &node;
            _link_current = &node;
            _cnt = 1;
        }

        ~List(){}

        void push(data_type data)
        {
            Node<data_type> node(data);
            /*if (_link_start == NULL)
            {
                _link_start = &node;
                _link_end = &node;
            }
            else
            {
                _link_end = &node;
                //_link_end = &node;
            }*/
            _link_current = &node;
             std::cout << &node << " ddf " << std::endl;
             std::cout << "dtnhr ";
             _link_current->show();
            //node._link_next = NULL;
            _cnt += 1;
        }

        void pull()
        {
            std::cout << _link_current << std::endl;
            _link_current->show();
            //Node<data_type> tmp = *_link_current;
            //tmp.show();
            //tmp._data.show();
        }

        void cnt()
        {
            std::cout << _cnt << std::endl;
            //return _cnt;
        }

        data_type operator [](int i)
        {
            cout << "keka";
        }
};

#endif // LIST_H
