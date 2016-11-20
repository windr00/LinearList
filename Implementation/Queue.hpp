//
// Created by 冉惟之 on 2016/11/20.
//

#include "../Interface/List.hpp"

#ifndef CPPTEST_QUEUE_HPP
#define CPPTEST_QUEUE_HPP

template<class T>

class Queue : public List<T> {

public:

    Queue(unsigned length) : List<T>(length) { }

};

#endif //CPPTEST_QUEUE_HPP
