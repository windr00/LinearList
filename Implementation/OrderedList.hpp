//
// Created by 冉惟之 on 09/12/2016.
//

#ifndef CPPTEST_ORDEREDLIST_HPP
#define CPPTEST_ORDEREDLIST_HPP

#include "../Interface/List.hpp"

//template <class T>
//class OrderedList {
//
//private:
//
//    List<T> *list;
//
//public:
//
//    OrderedList(List<T> &list) : list(&list) {}
//
//    void Insert<T>(T e);
//
//    T operator[]<T>(unsigned i);
//
//    T GetElement<T>(unsigned i);
//
//    void Delete<T>(int i);
//
//    unsigned GetLength();
//
//    ~OrderedList();
//
//};
//template <class T>
//
//void OrderedList::Insert(T e) {
//    if (list->GetLength() == 0) {
//        list->InsertItem(e,0);
//        return;
//    }
//    for (unsigned i = 0;i < list->GetLength();i++) {
//        if (list->[i] > e) {
//            list->InsertItem(e,i);
//        }
//    }
//}
//template <class T>
//
//T OrderedList::operator[](unsigned i) {
//    return list->[i];
//}
//template <class T>
//
//T OrderedList::GetElement(unsigned i) {
//    return this->operator[](i);
//}
//template <class T>
//
//void OrderedList::Delete(int i) {
//    list->DeleteItem(i);
//}
//template <class T>
//
//OrderedList::~OrderedList() {
//    list->Dispose();
//}
//
//unsigned OrderedList::GetLength() {
//    return list->GetLength();
//}

template<class T>

class OrderedList : public List<T> {
private:

    List<T> *list;


public:

    OrderedList(List<T> *list) : list(list) {}

    void Init() override {
        list->Init();
    }

    unsigned int GetLength() override {
        return list->GetLength();
    }

    T GetItem(unsigned i) override {
        return list->GetItem(i);
    }

    int FindFirst(T e) override {
        return list->FindFirst(e);
    }

    int FindLast(T e) override {
        return list->FindLast(e);
    }

    void InsertItem(T e, unsigned j) override {
        if (list->GetLength() == 0) {
            list->InsertItem(e, 0);
            return;
        }
        for (unsigned i = 0; i < list->GetLength(); i++) {
            if (list->[i] > e) {
                list->InsertItem(e, i);
            }
        }
    }

    T DeleteItem(unsigned i) override {
        return list->DeleteItem(i);
    }

    void Print() override {
        return list->Print();
    }

    bool Empty() override {
        return list->Empty();
    }

    void Dispose() override {
        list->Dispose();
    }
};

#endif //CPPTEST_ORDEREDLIST_HPP
