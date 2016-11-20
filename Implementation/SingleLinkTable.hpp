//
// Created by 冉惟之 on 2016/11/20.
//

#include <exception>
#include <iostream>
#include "../Interface/List.hpp"

#ifndef CPPTEST_LINKTABLE_H
#define CPPTEST_LINKTABLE_H

//template class definition

template<class T>

class SingleLinkTable : public List<T> {
private:

    typedef struct _node_ {
        T data;
        _node_ *next;
    } node;

    typedef _node_ *nodePtr;

    nodePtr head = nullptr;

    unsigned count = 0;

    nodePtr operator+(unsigned i) {
        nodePtr temp = head;
        for (int j = 0; j < i; ++j, temp = temp->next) { }
        return temp;
    }

public:

    SingleLinkTable(int length) : List<T>(length) { }

    void Init() override;

    unsigned GetLength() override;

    T GetItem(unsigned i) override;

    T operator[](unsigned i);

    int FindFirst(T e) override;

    int FindLast(T e) override;

    void InsertItem(T e, unsigned i) override;

    T DeleteItem(unsigned i) override;

    void Print() override;

    bool Empty() override;

    void Dispose() override;


};

//class implementation


template<class T>
void SingleLinkTable<T>::Init() {
    head = new node;
    nodePtr temp = head;
    for (int i = 0; i < this->length; i++) {
        temp->next = new node;
        temp = temp->next;
    }
    temp = nullptr;
}

template<class T>

unsigned SingleLinkTable<T>::GetLength() {
    return count;
}


template<class T>

T SingleLinkTable<T>::GetItem(unsigned i) {
    if (i < count) {
        return this->operator[](i);
    }
    else {
        throw std::exception();
    }
}

template<class T>

T SingleLinkTable<T>::operator[](unsigned i) {
    return this->operator+(i)->data;
}


template<class T>

int SingleLinkTable<T>::FindFirst(T e) {
    nodePtr temp = head;
    int ret = -1;
    for (int i = 0; i < count; i++) {
        if (temp->data == e) {
            ret = i;
            break;
        }
        temp = temp->next;
    }
    return ret;
}

template<class T>
int SingleLinkTable<T>::FindLast(T e) {
    nodePtr temp = head;
    int ret = -1;
    for (int i = 0; i < count; i++) {
        if (temp->data == e) {
            ret = i;
        }
        temp = temp->next;
    }
    return ret;
}

template<class T>
void SingleLinkTable<T>::InsertItem(T e, unsigned i) {
    nodePtr temp;
    if (i < count) {
        temp = this->operator+(i - 1);
        if (temp->next == nullptr) {
            temp->next = new node;
            temp->next->data = e;
            temp->next->next = nullptr;
        }
        else {
            nodePtr np = new node;
            np->data = e;
            np->next = temp->next;
            temp->next = np;

        }
        count++;
    }
    else if (i == count) {
        if (i == 0) {
            temp = new node;
            temp->data = e;
            temp->next = head->next;
            head = temp;
        }
        else {
            temp = this->operator+(count - 1);
            temp->next = new node;
            temp->next->data = e;
            temp->next->next = nullptr;
        }
        count++;
    }
    else {
        throw std::exception();
    }
}

template<class T>
T SingleLinkTable<T>::DeleteItem(unsigned i) {
    if (i < count) {
        T ret;
        nodePtr temp = head;
        if (i == 0) {
            head = head->next;
            ret = temp->data;
            delete temp;
            count--;
            return ret;
        }
        temp = this->operator+(i - 1);
        nodePtr del = temp->next;
        temp->next = del->next;
        ret = del->data;
        delete del;
        count--;
        return ret;

    }
    throw std::exception();
}

template<class T>
void SingleLinkTable<T>::Print() {
    nodePtr temp = head;
    for (int i = 0; i < count; i++, temp = temp->next) {
        std::cout << temp->data << " ";
    }
    std::cout << std::endl;
}

template<class T>
bool SingleLinkTable<T>::Empty() {
    return count == 0;
}

template<class T>
void SingleLinkTable<T>::Dispose() {
    while (head->next != nullptr) {
        nodePtr del = head->next;
        head->next = del->next;
        delete del;
    }
    delete head;
}


#endif //CPPTEST_LINKTABLE_H
