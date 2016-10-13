typedef struct _queue* Queue;

Queue createQueue(void);
void enqueue(Queue q, int val);
int dequeue(Queue q);
void destoryQueue(Queue q);

void printQueue(Queue q);
