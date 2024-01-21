#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

LinkedList* createList()
{
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void addNode(LinkedList* list, int data)
{
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = NULL;
    
    if(list->head == NULL && list->tail == NULL) // if list is empty
    {
        list->head = newNode;
        list->tail = newNode;
    }
    else // if list is not empty
    {
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void debugPrint(LinkedList* list)
{
    ListNode* currentNode = list->head;
    for(int i = 0; currentNode != NULL; i++)
    {
        printf("NODE %i: %i\n", i, currentNode->data);
        currentNode = currentNode->next;
    }
}