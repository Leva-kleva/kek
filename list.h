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
        Node<data_type>* _link_start;
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
            _link_start = &node;
            _link_current = &node;
           //_link_current->show();
            _cnt = 1;
        }

        ~List(){}

        void push(data_type data)
        {
            //_link_current->show();
            Node<data_type> node(data);
            _link_current->_link_next = &node;
            //_link_current->show();
            //_link_current->_link_next->show();
            _link_current = &node;
            //_link_current->show();
            _cnt += 1;
        }

        void pull()
        {
            _link_current->show();
        }

        void cnt()
        {
            std::cout << _cnt << std::endl;
        }

        void operator [](int k)
        {
            Node<data_type>* _link_tmp;
            _link_tmp = _link_start;
            int i = 0;
            for (i; i < k; i++)
            {
                std::cout << _link_tmp << std::endl;
                _link_tmp = _link_tmp->_link_next;
            }
            std::cout << "elemet " << i << std::endl;
            _link_tmp->show();
        }
};

#endif // LIST_H
