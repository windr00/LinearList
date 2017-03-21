#include "Operator/ListOperator.hpp"
#include "Implementation/SingleLinkTable.hpp"
#include "Implementation/ArrayList.hpp"
#include "Algorithm/Peterson's_Algorithm/PetersonAlgorithm.hpp"
#include "Algorithm/Sort/Sort.h"
#include "Implementation/Stack.hpp"
#include "Implementation/Queue.hpp"

int main() {

    ArrayList<int> * arrayList = new ArrayList<int>(1);
    ArrayList<int> & list = * arrayList;

    InitList<int>(list);

    ListInsert<int>(list, 0, 1);

    ListInsert<int>(list,1, 2);

    ListInsert<int>(list,1, 3);

    PrintList<int>(list);

    std::cout<<LocateElem(list, 2)<<std::endl;


    SingleLinkTable<const char *> &table1 = *new SingleLinkTable<const char *>();

    InitList<const char *>(table1);

    ListInsert<const char *>(table1, 0, "Hello");

    ListInsert<const char *>(table1, 1, "World");

    ListInsert<const char *>(table1, 1, "Haha");

    ListInsert<const char *>(table1, 3, "Lala");

    table1[3] = "Papa";

    PrintList<const char *>(table1);

    ListDelete<const char *>(table1, 1);

    PrintList<const char *>(table1);

    DestroyList<const char *>(table1);

    SingleLinkTable<ArrayList<int> *> &table = *new SingleLinkTable<ArrayList<int> *>();

    InitList<ArrayList<int> *>(table);

    ArrayList<int> &list1 = *new ArrayList<int>(2);

    InitList<int>(list1);

    ListInsert<int>(list1, 0, 1);

    ListInsert<int>(list1, 1, 2);

    ArrayList<int> &list2 = *new ArrayList<int>(2);

    InitList<int>(list2);

    ListInsert<int>(list2, 0, -1);

    ListInsert<int>(list2, 0, -2);

    ListInsert<ArrayList<int> *>(table, 0, &list1);

    ListInsert<ArrayList<int> *>(table, 1, &list2);

    PrintList<ArrayList<int> *>(table);

    PrintList<int>(*GetElem<ArrayList<int> *>(table, 0));
    PrintList<int>(*GetElem<ArrayList<int> *>(table, 1));
    PrintList<int>(list1);
    PrintList<int>(list2);

    int arr[] = {1,45,-1,98,100,34,65,65,87,0};

    select_sort(arr, 10);

    for (int i = 0;i < 10;i ++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, 10);

    for (int i = 0;i < 10;i ++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");


    quick_sort(arr, 10);

    for (int i = 0;i < 10;i ++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");


    insert_sort(arr, 10);

    for (int i = 0;i < 10;i ++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    Stack<int> s ;

    for (int i = 0;i < 10;i++) {
        s.Push(arr[i]) ;
    }

    while (!s.Empty()) {
        printf("%d\t",s.Pop());
    }
    printf("\n");



    Queue<int> q(10) ;

    for (int i = 0;i < 10;i++) {
        q.Enqueue(arr[i]);
    }
    printf("%d\n", q.Full());
    while (!q.Empty()) {
        printf("%d\t",q.Dequeue());
    }
    printf("\n");

    return 0;
}