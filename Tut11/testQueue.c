#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char* argv[]) {
    //testQueue();
    Queue q1 = createQueue();
    enqueue(q1, 8);
    enqueue(q1, 7);
    enqueue(q1, 6);
    enqueue(q1, 5);
    enqueue(q1, 4);
    printQueue(q1);
    printf("%d\n", dequeue(q1));
    printf("%d\n", dequeue(q1));
    printf("%d\n", dequeue(q1));
    printQueue(q1);
    return 0;
}