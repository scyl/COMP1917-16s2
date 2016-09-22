typedef struct node* Lnode;

Lnode newNode(int value);
Lnode prepend(Lnode head, Lnode new);
Lnode append(Lnode head, Lnode new);
void printList(Lnode head);
Lnode deleteNode(Lnode head, int val);
    
Lnode  concat( Lnode L, Lnode M );