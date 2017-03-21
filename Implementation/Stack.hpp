#include "SingleLinkTable.hpp"
#include "ArrayList.hpp"

#ifndef _STACK_HPP_
#define _STACK_HPP_

template<class T>
class Stack{
private:

    SingleLinkTable<T> * list;

public:

    Stack()  {
        list = new SingleLinkTable<T>();
        list->Init();
    }


    void Push(T e) {
        list->InsertItem(e, 0);
    }

    T Pop() {
      return list->DeleteItem(0);
    }

    void Clear() {
        list->Dispose();
        list->Init();
    }

    T Top() {
        return list->GetItem(0);
    }

    bool Empty() {
        return list->Empty();
    }

    ~Stack(){
        list->Dispose();
        delete list;
    }

};


#endif