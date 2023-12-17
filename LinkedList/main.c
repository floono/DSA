#include "linked_list.h"

int main()
{
    LinkedList* list = createList(2);
    addNode(list, 5);
    addNode(list, 12);
    addNode(list, 15);
    addNode(list, 8);
    addNode(list, 3);
    debugPrint(list);

    return 0;
}