//
// Created by windr on 21/03/2017.
//

#ifndef CPPTEST_BINARYTREE_HPP
#define CPPTEST_BINARYTREE_HPP

#include <search.h>
#include "../Interface/List.hpp"



template <class T>
class BinaryTree {
private :

    typedef _node * tree_node;
    struct _node {
        T data;

        tree_node lnode;
        tree_node rnode;
    };


    tree_node root = nullptr;

    static tree_node CreateNewNode(T data) {
        tree_node np = new _node;
        np->data = data;
        np->lnode = nullptr;
        np->rnode = nullptr;
        return np;
    }

public:



    BinaryTree() {

    }

    BinaryTree(List<T> &pre_order, List<T> &in_order){
        root = CreateNewNode(pre_order.GetItem(0));
    }

    void RestoreTree(List<T> & pre_order, List<T> &in_order) {

    }

};

#endif //CPPTEST_BINARYTREE_HPP
