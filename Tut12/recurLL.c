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
int lengthNode(Lnode node);
int search(List l, int val);
int searchNode(Lnode node, int val);

int main(int argc, char* argv[]) {
    List list1 = newList();
    append(list1, 1);
    append(list1, 211);
    append(list1, 3);
    append(list1, 4);
    
    printf("length: %d\n", length(list1));
    printf("search: %d\n", search(list1, 456));
    
    return EXIT_SUCCESS;
}

int length(List l) {
   return lengthNode(l->head);
}

int lengthNode(Lnode node) {
    int len = 0;
    if (node != NULL) {
        len = 1 + lengthNode(node->next);
    }
    return len;
}

int search(List l, int val) {
    return searchNode(l->head, val);
}

int searchNode(Lnode node, int val) {
    int found = 0;
    if (node != NULL) {
        if (node->val == val) {
            found = 1;
        } else {
            found = searchNode(node->next, val);
        }
    }
    return found;
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
