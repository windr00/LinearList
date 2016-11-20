//
// Created by 冉惟之 on 2016/11/19.
//

#ifndef CPPTEST_ARRAYLIST_H
#define CPPTEST_ARRAYLIST_H


#include "../Interface/List.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>


//template class definition
template<class T>
class ArrayList : public List<T> {
public:

    ArrayList(unsigned len) : List<T>(len) {}

    unsigned GetLength() override;

    T GetItem(unsigned i) override;

    void InsertItem(T e, unsigned i) override;

    int FindFirst(T e) override;

    int FindLast(T e) override;

    T DeleteItem(unsigned i) override;

    void Print() override;

    bool Empty() override;

    void Dispose() override;

    T &operator[](unsigned i);

    void Init() override;

private:


    T *array;


protected:


    unsigned int count = 0;

};





//Implementations


template <class T>
unsigned ArrayList<T>::GetLength() {
	return count;
}

template <class T>
T ArrayList<T>::GetItem(unsigned i) {
	if (i < count) {
		return this->operator[](i);
	}
	throw std::exception();
}

template <class T>
T &ArrayList<T>::operator[](unsigned i) {
	return *(this->array + (i * sizeof(T)));
}

template <class T>
int ArrayList<T>::FindFirst(T e) {
	for (unsigned i = 0; i < count; i++) {
		if (this->operator[](i) == e) {
			return i;
		}
	}
	return -1;
}

template <class T>
int ArrayList<T>::FindLast(T e) {
	for (unsigned i = count - 1; i > -1; i--) {
		if (this->operator[](i) == e) {
			return i;
		}
	}
	return -1;
}


template <class T>
void ArrayList<T>::InsertItem(T e, unsigned i) {
	if (i <= count && count == this->length) {
		T * temp = new T[this->length + 1];
		memset(temp, 0, sizeof(T) * (this->length + 1));
        for (int j = 0; j < i; j++) {
            *(temp + (j * sizeof(T))) = this->operator[](j);
        }
		*(temp + (i * sizeof(T))) = e;
		for (; i<this->length; i++) {
			*(temp + ((i + 1) * sizeof(T))) = this->operator[](i);
		}
		delete this->array;
		this->array = temp;
		this->length++;
		count++;
	}
	else if (i <= count && count < this->length) {
		for (unsigned j = count - 1; j > i - 1; j--) {
			this->operator[](j + 1) = this->operator[](j);
		}
		this->operator[](i) = e;
		count++;
	}
	else {
		throw std::exception();
	}

}

template <class T>
T ArrayList<T>::DeleteItem(unsigned i) {
	if (i < count) {
		T ret = this->operator[](i);
		for (unsigned j = i; j < count; j++) {
			this->operator[](j) = this->operator[](j + 1);
		}
		count--;
		return ret;
	}
	else {
		throw std::exception();
	}

}

template <class T>
void ArrayList<T>::Print() {
	for (unsigned i = 0; i < count; i++) {
		std::cout << this->operator[](i) << " ";
	}
	std::cout << std::endl;
}

template <class T>

bool ArrayList<T>::Empty() {
	return count == 0;
}

template <class T>
void ArrayList<T>::Init() {
	this->array = new T[this->length];
}

template <class T>
void ArrayList<T>::Dispose() {
	delete this->array;
}

#endif //CPPTEST_LIST_H
