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

void removeFirst(LinkedList* list)
{
    if(list->head == NULL && list->tail == NULL) // if list is empty
    {
        perror("List is empty.");
    }
    else // if list is not empty
    {
        ListNode* temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
}

void removeLast(LinkedList* list)
{
    if(list->head == NULL && list->tail == NULL) // if list is empty
    {
        perror("List is empty.");
    }
    else // if list is not empty
    {
        ListNode* temp1 = list->head;
        ListNode* temp2 = temp1->next;
        if(temp2 == NULL) // if there is only one node left in the list
        {
            free(temp1);
        }
        else // if there is more than one node left in the list
        {
            while(temp2->next != NULL)
            {
                temp1 = temp2;
                temp2 = temp2->next;
            }
            temp1->next = NULL;
            list->tail = temp1;
            free(temp2);
        }
    }
}

void freeList(LinkedList* list)
{
    ListNode* temp1 = list->head;
    ListNode* temp2;
    while(temp1 != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
        free(temp2);
    }
    free(list);
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