//
// Created by windr on 20/03/2017.
//

#ifndef CPPTEST_SORT_H
#define CPPTEST_SORT_H

#include <cstdlib>

template <class T>
static void swap(T * value1, T * value2) {
    T temp = * value1;
    * value1 = *value2;
    * value2 = temp;
}

template<class T>

static bool handle_short_array(T *array, int length) {

    switch (length) {
        case 0:
        case 1: {
            return true;
        }
        case 2: {
            if (array[0] > array[1]) {
                swap(array + 0, array + 1);
            }
            return true;
        }
        default: {
            return false;
        }
    }
}

template <class T>
void bubble_sort(T * array, int length) {
    int flag = 0;
//    int round = 0;
    //printf("bubble round: \n");
    for (int i =0; i < length;i++) {
        for (int j = 1;j < length;j++) {
            if(*(array + j) < *(array + j - 1)) {
                flag = 1 ;
                swap(array + j, array + j -1);
            }
        }
        //round++;
        //printf("\r%d", round);
        //fflush(stdout);
        if(!flag) {
            return;
        }
    }
}

template <class T>
static void append_array_item(T ** array, int length,T data) {
    * array =(T *) realloc(*array, (length + 1) * sizeof(T));
    (* array)[length] = data;
}

template <class T>
static int partition(T * array, int length) {
    int pivot_value = array[0];
    T * front = NULL, * rear = NULL;
    int front_len = 0;
    int rear_len = 0;
    for (int i = 1;i < length;i++) {
        if (array[i] < pivot_value) {
            append_array_item(&front, front_len++, array[i]);
        }
        else if(array[i] >= pivot_value) {
            append_array_item(&rear, rear_len++, array[i]);
        }
    }
    for (int i = 0;i < front_len;i++) {
        array[i] = front[i];
    }
    array[front_len] = pivot_value;
    for (int i = 0;i < rear_len;i++) {
        array[front_len + i + 1] = rear[i];
    }
    free(front);
    free(rear);
    return front_len;
}

template <class T>
void quick_sort(T * array, int length) {
//    static int round = 0;
    if (handle_short_array(array, length)) {
        return;
    }

//    round++;
//    printf("\r%d", round);
    int pivot = partition(array, length);
    quick_sort(array, pivot);
    quick_sort(array + pivot + 1, length - pivot - 1);
}

template <class T>
void select_sort(T * array, int length) {
    if (handle_short_array(array, length)) {
        return;
    }
    int flag = 0;
    for (int i = 0;i < length;i++) {
        int min = i;
        for (int j = i + 1; j < length;j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(array + min, array + i);
        }
    }
}


template <class T>
void insert_sort(T * array, int length) {
    if (handle_short_array(array, length)) {
        return;
    }
    SingleLinkTable<T>  temp;
    temp.Init();
    temp.InsertItem(array[0], 0);
    for (int i = 1;i < length;i++) {
        unsigned int max_pos = temp.GetLength();
        for (unsigned int j = 0;j < temp.GetLength();j++) {
            if (temp.GetItem(j) > array[i]) {
                max_pos = j;
                break;
            }
        }
        temp.InsertItem(array[i], max_pos);
    }

    for (int i = 0;i < length;i++) {
        array[i] = temp[i];
    }
}

template<class T>

void shell_sort(T *array, int length) {
    if (handle_short_array(array, length)) {
        return;
    }
    int d = length * 8 / 10;
    SingleLinkTable<T> temp;
    int indexes[length];
    int sorted_length = 0;
    T *t = nullptr;
    while (d >= 1) {
        temp.Init();
        for (int i = 0; i < length; i += d) {
            temp.InsertItem(array[i], temp.GetLength());
            indexes[sorted_length++] = i;
        }
        t = temp.ToArray();
        insert_sort(t, sorted_length);
        for (int j = 0; j < sorted_length; j++) {
            array[indexes[j]] = t[j];
        }
        sorted_length = 0;
        if (d == 1) {
            break;
        }
        d = (d - 2) >= 1 ? d - 2 : 1;
        temp.Dispose();
        temp.Init();
        delete t;
    }
}
#endif //CPPTEST_SORT_H

