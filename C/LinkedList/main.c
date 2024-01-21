#include "linked_list.h"

int main()
{
    LinkedList* list = createList(2);
    int a = 5;
    addNode(list, (void*)&a);
    addNode(list, (void*)&a);
    addNode(list, (void*)&a);
    addNode(list, (void*)&a);
    addNode(list, (void*)&a);
    debugPrint(list);

    return 0;
}