#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct _queue{
    int *array; // make it 10 elements initially
    int numNodes;
};

Queue createQueue(void) {
    Queue new = malloc(sizeof(struct _queue));
    if (new == NULL) {
        printf("ERROR\n");
        exit(1);
    }
    new->numNodes = 0;
    new->array = malloc(sizeof(int)*10);
    
    return new;
}

void destoryQueue(Queue q) {
    
}

void enqueue(Queue q, int val) {
    if (q == NULL) {
       exit(1);
    }
    
    q->array[q->numNodes] = val;
    q->numNodes++;
}

int dequeue(Queue q) {
    if (q == NULL) {
       exit(1);
    }
    
    int returnValue = q->array[0];
    q->numNodes--;
    int i = 0;
    while (i < q->numNodes) {
        q->array[i] = q->array[i+1];
        i++;
    }
    return returnValue;
}/*
int dequeue(Queue q) {
    if (q == NULL) {
       exit(1);
    }
    q->numNodes--;
    return q->array[q->numNodes];
}*/
void printQueue(Queue q) {
    if (q == NULL) {
       exit(1);
    }
    
    int i = 0;
    while (i < q->numNodes) {
        printf("%d ->", q->array[i]);
        i++;
    }
    printf("\n");
}