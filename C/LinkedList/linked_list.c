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
    if(list->head == NULL || list->tail == NULL)
    {
        perror("List is empty.");
    }
    else
    {
        ListNode* temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
}

void removeLast(LinkedList* list)
{
    if(list->head == NULL || list->tail == NULL)
    {
        perror("List is empty.");
    }
    else
    {
        ListNode* temp1 = list->head;
        ListNode* temp2 = temp1->next;
        if(temp2 == NULL)
        {
            free(temp1);
        }
        else
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

void debugPrint(LinkedList* list)
{
    ListNode* currentNode = list->head;
    for(int i = 0; currentNode != NULL; i++)
    {
        printf("NODE %i: %i\n", i, currentNode->data);
        currentNode = currentNode->next;
    }
}