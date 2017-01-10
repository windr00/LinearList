#include "Operator/ListOperator.hpp"
#include "Implementation/SingleLinkTable.hpp"
#include "Implementation/ArrayList.hpp"
#include "Algorithm/Peterson's_Algorithm/PetersonAlgorithm.hpp"
int main() {
//    ArrayList<int> * arrayList = new ArrayList<int>(1);
//    ArrayList<int> & list = * arrayList;
//
//    InitList<int>(list);
//
//    ListInsert<int>(list, 0, 1);
//
//    ListInsert<int>(list,1, 2);
//
//    ListInsert<int>(list,1, 3);
//
//    PrintList<int>(list);
//
//    std::cout<<LocateElem(list, 2)<<std::endl;


//    SingleLinkTable<const char *> &table = *new SingleLinkTable<const char *>();
//
//    InitList<const char *>(table);
//
//    ListInsert<const char *>(table, 0, "Hello");
//
//    ListInsert<const char *>(table, 1, "World");
//
//    ListInsert<const char *>(table, 1, "Haha");
//
//    ListInsert<const char *>(table, 3, "Lala");
//
//    table[3] = "Papa";
//
//    PrintList<const char *>(table);
//
//    ListDelete<const char *>(table, 1);
//
//    PrintList<const char *>(table);
//
//    DestroyList<const char *>(table);

//    SingleLinkTable<ArrayList<int> *> &table = *new SingleLinkTable<ArrayList<int> *>();
//
//    InitList<ArrayList<int> *>(table);
//
//    ArrayList<int> &list1 = *new ArrayList<int>(2);
//
//    InitList<int>(list1);
//
//    ListInsert<int>(list1, 0, 1);
//
//    ListInsert<int>(list1, 1, 2);
//
//    ArrayList<int> &list2 = *new ArrayList<int>(2);
//
//    InitList<int>(list2);
//
//    ListInsert<int>(list2, 0, -1);
//
//    ListInsert<int>(list2, 0, -2);
//
//    ListInsert<ArrayList<int> *>(table, 0, &list1);
//
//    ListInsert<ArrayList<int> *>(table, 1, &list2);
//
//    PrintList<ArrayList<int> *>(table);
////
//    PrintList<int>(*GetElem<ArrayList<int> *>(table, 0));
//    PrintList<int>(*GetElem<ArrayList<int> *>(table, 1));
//    PrintList<int>(list1);
//    PrintList<int>(list2);


    InitThreads();

    return 0;
}