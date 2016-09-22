#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char* argv[]){
    Lnode list1 = newNode(5);
    list1 = append(NULL, list1);
    printList(list1);
    list1 = append(list1, newNode(2));
    printList(list1);
    list1 = prepend(list1, newNode(6));
    printList(list1);
    list1 = append(list1, newNode(7));
    printList(list1);
    list1 = deleteNode(list1, 6);
    printList(list1);
    
    return EXIT_SUCCESS;
}