//
// Created by 冉惟之 on 2016/11/20.
//

#ifndef CPPTEST_STACK_HPP
#define CPPTEST_STACK_HPP

#include "../Interface/List.hpp"

template<class T>

class Stack : public List<T> {

public:

    Stack(unsigned length) : List<T>(length) { }

};


#endif //CPPTEST_STACK_HPP
