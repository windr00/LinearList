#include "Operator/ArrayListOperator.hpp"
#include "Implementation/SingleLinkTable.hpp"

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


    SingleLinkTable<const char *> &table = *new SingleLinkTable<const char *>();

    InitList<const char *>(table);

    ListInsert<const char *>(table, 0, "Hello");

    ListInsert<const char *>(table, 1, "World");

    ListInsert<const char *>(table, 1, "Haha");

    ListInsert<const char *>(table, 3, "Lala");

    table[3] = "Papa";

    PrintList<const char *>(table);

    ListDelete<const char *>(table, 1);

    PrintList<const char *>(table);

    DestroyList<const char *>(table);

    return 0;
}