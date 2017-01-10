//
// Created by 冉惟之 on 15/12/2016.
//

#ifndef CPPTEST_EQUATIONSOLVE_HPP
#define CPPTEST_EQUATIONSOLVE_HPP
#include "../../Implementation/Stack.hpp"
#include <iostream>

namespace Algorithm {

    static double Calculate(double a, double b, char op) {
        switch (op) {
            case '+' : {
                return a + b;
            }
            case '-' : {
                return a - b;
            }
            case '/' : {
                return a / b;
            }
            case '*' : {
                return a * b;
            }
            default: {
                throw std::exception();
            }
        }
    }


    double Solve(std::string str) {

    }
}

#endif //CPPTEST_EQUATIONSOLVE_HPP
