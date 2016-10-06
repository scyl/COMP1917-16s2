#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char* argv[]){
    List newl = newList();
    append(newl, 1);
    append(newl, 3);
    append(newl, 5);
    append(newl, 7);
    append(newl, 9);
    append(newl, 11);
    printList(newl);
    swap(newl);
    printList(newl);
    //reverse(newl);
    //printList(newl);
    /*
    List newm = newList();
    append(newm, 2);
    append(newm , 4);
    append(newm, 6);
    append(newm, 8);
    printList(newm);
    
    shuffle_merge(newl, newm);
    printList(newl);*/
    
    return EXIT_SUCCESS;
}