typedef struct list* List;

List newList(void);
void append(List l, int num);
void printList(List l);
void deleteNode(List l, int val);

void shuffle_merge(List l, List m);
void reverse(List l);
void swap(List l);