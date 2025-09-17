// Copy of linkedlist
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->info = 10;
    head->link = second;

    second->info = 20;
    second->link = third;

    third->info = 30;
    third->link = NULL;

    printf("Original List: ");
    printList(head);

    
    struct Node* original = head;
    struct Node* copyHead = NULL;
    struct Node* copyTail = NULL;

    while (original != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->info = original->info;
        newNode->link = NULL;

        if (copyHead == NULL) {
            copyHead = newNode;
            copyTail = newNode;
        } else {
            copyTail->link = newNode;
            copyTail = newNode;
        }

        original = original->link;
    }

    printf("Copied List: ");
    printList(copyHead);

  
    free(head);
    free(second);
    free(third);

   
    struct Node* temp;
    while (copyHead != NULL) {
        temp = copyHead;
        copyHead = copyHead->link;
        free(temp);
    }

    return 0;
}

