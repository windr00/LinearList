//
// Created by 冉惟之 on 2016/11/20.
//

#include "../Interface/List.hpp"
#include "ArrayList.hpp"
#include "SingleLinkTable.hpp"

#ifndef CPPTEST_QUEUE_HPP
#define CPPTEST_QUEUE_HPP

template<class T>

class Queue {

private:

    unsigned length;

    unsigned front;

    unsigned rear;

    bool is_full;

    SingleLinkTable<T> * container;
public:

    Queue(unsigned length) : length(length) {
        container = new SingleLinkTable<T>();
        container->Init();
        front = 0;
        rear = 0;
        is_full = false;
    }


    bool Enqueue(T e) {
        if (is_full) {
            return false;
        }

        container->InsertItem(e, rear++);
        rear %= length;
        if (rear == front) {
            is_full = true;
        }
        return true;
    }

    T Dequeue() {
        T ret = container->GetItem(front++);
        front %= length;
        is_full = false;
        return ret;
    }

    bool Empty() {
        return front == rear && !is_full;
    }

    bool Full() {
        return is_full;
    }

    void Clear() {
        container->Dispose();
        container->Init();
    }


    unsigned Length() {
        return length;
    }

    unsigned Count() {
        return (rear + length - front)%length;
    }
    ~Queue(){
        delete container;
    }

};

#endif //CPPTEST_QUEUE_HPP
