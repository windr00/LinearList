//
// Created by 冉惟之 on 07/12/2016.
//

#ifndef CPPTEST_SEQUENCEDSEARCH_HPP
#define CPPTEST_SEQUENCEDSEARCH_HPP

#include "../../Interface/List.hpp"
#include "../../Operator/ListOperator.hpp"
#include "../../Implementation/OrderedList.hpp"

template<class T>
int SeqencedSearch<T>(List<T> list, T key) { // Time Complexity = O(n), ASL(succ) = (n+1)/2 ASL(fail) = n+1
    ListInsert<T>(list, 0, key); // list[0] is the sentry. Sentry is to set i to 0 when search failed,
    // then we don't need to check if i is within array size
    int i = 0;
    for (i = Length<T>(list); GetElem<T>(list, i) != key; i--);

    return i -
           1; // return -1 means search failed (in other words, the result i when search succeeds ranges from 1 to array length)
}

template<class T>
int BinarySearch(OrderedList<T> &list, T key) {// Time Complexity = O(log2(n)), ASL(succ) = log2(n+1) - 1
    int low = 0, high = list.GetLength(), mid;
    while (low < high) {
        mid = (low + high) / 2;
        if (key == GetElem(list, mid)) {
            return mid;
        }
        if (key > GetElem(list, mid)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

#endif //CPPTEST_SEQUENCEDSEARCH_HPP
