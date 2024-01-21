#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct ListNode
{
    void* data;
    struct ListNode* next;
};
typedef struct ListNode ListNode;

struct LinkedList
{
    struct ListNode* head;
    struct ListNode* tail;
};
typedef struct LinkedList LinkedList;

LinkedList* createList();
void addNode(LinkedList* list, void* data);
void debugPrint(LinkedList* list);

#endif