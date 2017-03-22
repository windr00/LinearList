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

	ArrayList(unsigned len) : List<T>(), length(len) { }

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
	unsigned length;

    T *array;

public:
    T *ToArray() override;

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
    return array[i];
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
            temp[j] = array[j];
        }
        temp[i] = e;
		for (; i<this->length; i++) {
            temp[i + 1] = array[i];
		}
		delete this->array;
		this->array = temp;
		this->length++;
		count++;
	}
	else if (i <= count && count < this->length) {
        for (int j = count - 1;
             j > (((int) i) - 1);
             j--) {
            array[j + 1] = array[j];
		}
        array[i] = e;
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

template<class T>
T *ArrayList<T>::ToArray() {
    T *ret = new T[this->GetLength()];
    for (int i = 0; i < this->GetLength(); i++) {
        ret[i] = this->array[i];
    }
    return ret;
}

#endif //CPPTEST_LIST_H
