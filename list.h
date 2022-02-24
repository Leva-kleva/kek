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

        List()
        {
            _link_start = NULL;
            _link_current = NULL;
            _cnt = 0;
        }

        List(data_type* data)
        {
            Node<data_type>* node = new Node<data_type>(data);
            _link_start = node;
            _link_current = node;
            _cnt = 1;
        }

        ~List(){}

        void push(data_type* data)
        {
            Node<data_type>* node = new Node<data_type>(data);
            if (_link_start == NULL)
            {
                _link_start = node;
                _link_current = node;
            }
            else
            {
                _link_current->_link_next = node;
                _link_current = node;
            }

            _cnt += 1;
        }

        void pull_link()
        {
            cout << _link_start << " " << _link_current << endl;
        }

        void pull()
        {
            _link_current->show();
            delete _link_current;
            _cnt -= 1;

            Node<data_type>* _link_tmp;
            _link_tmp = _link_start;
            for (int i = 0; i < _cnt; i++)
            {
                _link_tmp = _link_tmp->_link_next;
            }
            _link_current = _link_tmp;
        }

        void cnt()
        {
            std::cout << _cnt << std::endl;
        }

        void operator [](int k)
        {
            Node<data_type>* _link_tmp;
            _link_tmp = _link_start;
            for (int i = 0; i < k; i++)
            {
                _link_tmp = _link_tmp->_link_next;
            }
            _link_tmp->show();
        }
};


#endif // LIST_H
