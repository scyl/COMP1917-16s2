#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

typedef struct node* Lnode;
struct node{
  int val;
  Lnode next;
};
struct _queue{
    Lnode head;
    int numNodes;
};

Lnode newNode(int value);

Queue createQueue(void) {
    Queue new = malloc(sizeof(struct _queue));
    if (new == NULL) {
        printf("ERROR\n");
        exit(1);
    }
    new->numNodes = 0;
    new->head = NULL;
    
    return new;
}

void destoryQueue(Queue q) {
    while(q->numNodes > 0) {
        dequeue(q);
    }
    free(q);
}

void enqueue(Queue q, int val) {
    if (q == NULL) {
       exit(1);
    }
    Lnode new = newNode(val);
    
    if (q->numNodes == 0) {
        q->head = new;
    } else {
        Lnode cur = q->head;
        while(cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = new;
    }
    q->numNodes++;
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

int dequeue(Queue q) {
    if (q == NULL) {
       exit(1);
    }
    if (q->numNodes <= 0) {
        exit(1);
    }
    
    int returnValue = q->head->val;
    Lnode freeMe = q->head;
    q->head = q->head->next;
    free(freeMe);
    q->numNodes--;
    return returnValue;
}
void printQueue(Queue q) {
    Lnode cur = q->head;
    while(cur != NULL) {
        printf("%d ->", cur->val);
        cur=cur->next;
    }
    printf("\n");
}

void testQueue() {
    Queue new = createQueue();
    enqueue(new, 1);
    enqueue(new, 2);
    enqueue(new, 3);
    enqueue(new, 4);
    enqueue(new, 5);
    enqueue(new, 6);
    
    Lnode cur = new->head;
    assert(cur->val == 6);
    cur=cur->next;
    assert(cur->val == 5);
    cur=cur->next;
    assert(cur->val == 4);
    cur=cur->next;
    assert(cur->val == 3);
    cur=cur->next;
    assert(cur->val == 2);
    cur=cur->next;
    assert(cur->val == 1);
    cur=cur->next;
    assert(cur == NULL);
    printf("TEST SUCCESS\n");
}