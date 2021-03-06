//
// Created by 冉惟之 on 2016/11/19.
//

#ifndef CPPTEST_LIST_H
#define CPPTEST_LIST_H

#include <cstdlib>
#include <cstring>

template<class T>
class List {


public:

    virtual void Init() = 0;

    virtual unsigned GetLength()=0;

    virtual T GetItem(unsigned i) = 0;

    virtual int FindFirst(T e) = 0; // return -1 means find nothing

    virtual int FindLast(T e) = 0; // same as prv one

    virtual void InsertItem(T e, unsigned i) = 0;

    virtual T DeleteItem(unsigned i) = 0;

    virtual void Print() = 0;

    virtual bool Empty() = 0;

    virtual void Dispose() = 0;

    virtual T *ToArray() = 0;


};


#endif //CPPTEST_ARRAYLIST_H
