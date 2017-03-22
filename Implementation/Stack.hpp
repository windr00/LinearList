#include "SingleLinkTable.hpp"
#include "ArrayList.hpp"

#ifndef _STACK_HPP_
#define _STACK_HPP_

template<class T>
class Stack{
private:

    SingleLinkTable<T> *container;

public:

    Stack()  {
        container = new SingleLinkTable<T>();
        container->Init();
    }


    void Push(T e) {
        container->InsertItem(e, 0);
    }

    T Pop() {
        return container->DeleteItem(0);
    }

    void Clear() {
        container->Dispose();
        container->Init();
    }

    T Top() {
        return container->GetItem(0);
    }

    bool Empty() {
        return container->Empty();
    }

    ~Stack(){
        container->Dispose();
        delete container;
    }

};


#endif