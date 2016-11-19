
#include "ArrayListOperator.hpp"
#include "ArrayList.hpp"

int main() {
    ArrayList<int> * arrayList = new ArrayList<int>(1);
    ArrayList<int> & list = * arrayList;

    InitList<int>(list);

    ListInsert<int>(list, 0, 1);

    ListInsert<int>(list,1, 2);

    PrintList<int>(list);
	
	system("pause");
    return 0;
}