#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    int mainMenuChoice = -1;
    int dataInput;
    LinkedList* list = createList();

    while(mainMenuChoice != 0)
    {
        system("clear");
        printf("Please select an option:\n");
        printf("1. > Add a node\n");
        printf("2. > Remove first node\n");
        printf("4. > Display linked list info\n");
        printf("0. > Exit\n");

        scanf("%i", &mainMenuChoice);

        switch(mainMenuChoice)
        {
            case 0:
                printf("Goodbye!\n");
                break;
            case 1:
                printf("Please enter an integer for the node.\n");
                scanf("%i", &dataInput);
                addNode(list, dataInput);
                break;
            case 2:
                removeFirst(list);
                break;
            case 4:
                debugPrint(list);
                printf("Press anything to continue\n");
                getchar();
                getchar();
                break;
        }
    }

    return 0;
}