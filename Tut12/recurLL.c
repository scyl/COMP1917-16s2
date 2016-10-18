#include <stdio.h>
#include <stdlib.h>

typedef struct list* List;
typedef struct node* Lnode;

struct node{
    int val;
    Lnode next;
};

struct list{
    Lnode head;
    int numNodes;
};

List newList(void);
Lnode newNode(int value);
void append(List l, int num);
void printList(List l);
void deleteNode(List l, int val);

int length(List l);
int search(List l, int val);
void printReverse(List l);

int main(int argc, char* argv[]) {
    List list1 = newList();
    
    return EXIT_SUCCESS;
}

int length(List l){
    
}
int search(List l, int val){
    
}
void printReverse(List l){
    
}








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
