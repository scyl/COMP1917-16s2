#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct node{
    int val;
    Lnode next;
};

Lnode newNode(int value) {
    Lnode new = malloc(sizeof(struct node));
    if (new == NULL) {
        printf("ERROR\n");
    } else {
        new->val = value;
        new->next = NULL;
    }
    
    return new;
}

Lnode prepend(Lnode head, Lnode new) {
    if (new == NULL) {
        printf("you are stupid\n");
    } else {
        new->next = head;
        head = new;
    }
    
    return head;
}

Lnode append(list head, Lnode new) {
    Lnode cur = head;
    
    if (head == NULL) {
        head = new;
    } else {
        while(cur->next != NULL) {
            cur=cur->next;
        }
        cur->next = new;
        //new->next = NULL;
    }
    return head;
}

void printList(Lnode head) {
    Lnode cur = head;
    while(cur != NULL) {
        printf("%d ->", cur->val);
        cur=cur->next;
    }
    printf("\n");
}

Lnode deleteNode(Lnode head, int val) {
    Lnode cur = head;
    Lnode prev = head;
    Lnode toDelete = NULL;
    
    if (head->val == val) {
        toDelete = head;
        head = head->next;
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
    
    return head;
}

Lnode  concat(Lnode l, Lnode m) {
    return append(l, m);
}