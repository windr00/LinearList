#include "SingleLinkTable.hpp"
#ifndef _STACK_HPP_
#define _STACK_HPP_

template<class T>
class Stack {
private:

    List<T> &list;

public:

    Stack(List<T> &list) : list(list) {
        list.Init();
    }


    void Push(T e) {
        list.InsertItem(e, list.GetLength() - 1);
    }

    T Pop() {
      return list.DeleteItem(list.GetLength() - 1);
    }

    void Clear() {
        list.Dispose();
        list.Init();
    }

    T Top() {
        return list.GetItem(list.GetLength() - 1);
    }

};


#endif