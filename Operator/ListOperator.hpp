//
// Created by 冉惟之 on 2016/11/19.
//

#ifndef CPPTEST_ARRAYLISTOPERATOR_H
#define CPPTEST_ARRAYLISTOPERATOR_H

#include "../Interface/List.hpp"


template<class T>
void InitList(List<T> &L) {
	L.Init();
}

template<class T>
unsigned Length(List<T> &L) {
	return L.GetLength();
}

template<class T>
unsigned LocateElem(List<T> &L, T e) {
	return L.FindFirst(e);
}

template<class T>
T GetElem(List<T> &L, unsigned i) {
	return L.GetItem(i);
}

template<class T>
void ListInsert(List<T> &L, unsigned i, T e) {
	L.InsertItem(e, i);
}

template<class T>
T ListDelete(List<T> &L, unsigned i) {
	return L.DeleteItem(i);
}

template<class T>
void PrintList(List<T> &L) {
	L.Print();
}

template<class T>
bool Empty(List<T> &L) {
	return L.Empty();
}

template<class T>
void DestroyList(List<T> &L) {
	L.Dispose();
	delete &L;
}



#endif //CPPTEST_ARRAYLISTOPERATOR_H
