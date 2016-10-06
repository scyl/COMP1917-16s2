#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct node* Lnode;

struct node{
    int val;
    Lnode next;
};

struct list{
    Lnode head;
    int numNodes;
};

Lnode newNode(int value);

List newList(void) {
    List new = malloc(sizeof(struct list));
    if (new == NULL) {
        printf("ERROR\n");
        exit(1);
    }
    new->numNodes = 0;
    new->head = NULL;
    
    return new;
}

void append(List l, int num) {
    if (l == NULL) {
       exit(1);
    }
    Lnode new = newNode(num);
    
    if (l->numNodes == 0) {
        l->head = new;
    } else {
        Lnode cur = l->head;
        while(cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = new;
    }
    
    l->numNodes++;
}

Lnode newNode(int value) {
    Lnode new = malloc(sizeof(struct node));
    if (new == NULL) {
        printf("ERROR\n");
        exit(1);
    }
    new->val = value;
    new->next = NULL;
    
    return new;
}

void printList(List l) {
    Lnode cur = l->head;
    while(cur != NULL) {
        printf("%d ->", cur->val);
        cur=cur->next;
    }
    printf("\n");
}

void deleteNode(List l, int val) {
    Lnode cur = l->head;
    Lnode prev = l->head;
    Lnode toDelete = NULL;
    
    if (l->head->val == val) {
        toDelete = l->head;
        l->head = l->head->next;
    } else {
        while(cur != NULL && toDelete == NULL) {
            if (cur->val == val) {
                toDelete = cur;
                prev->next = cur->next;
            }
            prev = cur;
            cur = cur->next;
        }
    }
    if (toDelete != NULL) {
        free(toDelete);
    }
    l->numNodes--;
}

void insertAt(List l, int index, Lnode num) {
    if (l == NULL) {
        printf("ERROR");
    }
    Lnode cur = l->head;
    if (index == 0) {
        num->next = l->head;
        l->head = num;
    } else {
        int i = 0;
        while(i < index-1) {
            cur = cur->next;
            i++;
        }
        num->next = cur->next;
        cur->next = num;
    }
    
    l->numNodes++;
}

Lnode removeHead(List l) {
    if (l == NULL) {
        printf("ERROR");
    }
    Lnode returnValue = l->head;
    l->head = l->head->next;
    
    l->numNodes--;
    
    return returnValue;
}

Lnode removeAt(List l, int index) {
    if (l == NULL) {
        printf("ERROR");
    }
    Lnode toDelete = NULL;
    if (index == 0) {
        toDelete = l->head;
        l->head = l->head->next;
    } else {
        Lnode cur = l->head;
        int i = 0;
        while (i < index-1) {
            cur = cur->next;
            i++;
        }
        toDelete = cur->next;
        cur->next = cur->next->next;
    }
    l->numNodes--;
    
    return toDelete;
}

void shuffle_merge(List l, List m) {
    if (l == NULL) {
        printf("ERROR NULL LIST in print");
    }
    if (m == NULL) {
        printf("ERROR NULL LIST in print");
    }
    int index = 1;
    int numToInsert = m->numNodes;
    while(numToInsert > 0) {
        Lnode temp = removeHead(m);
        insertAt(l, index, temp);
        index += 2;
        
        numToInsert--;
    }
}

void reverse(List l) {
    if (l == NULL) {
        exit(1);
    }
    
    if (l->numNodes > 1) {
        Lnode prev = NULL;
        Lnode cur = l->head;
        Lnode fut = l->head->next;
        
        while(cur != NULL) {
            cur->next = prev;
            
            prev = cur;
            cur = fut;
            if (fut != NULL) {
                fut = fut->next;
            }
        }
        l->head = prev;
    }
}

void swap(List l) {
    if (l == NULL) {
        exit(1);
    }
    Lnode temp = NULL;
    int i = 1;
    while (i < l->numNodes) {
        temp = removeAt(l, i);
        insertAt(l, i-1, temp);
        printf("r%d a%d\n", i, i-1);
        i +=2;
    }
    
}