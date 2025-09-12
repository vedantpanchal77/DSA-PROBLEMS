#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

int main() {
    struct Node* head = NULL;     
    struct Node* temp = NULL;     
    struct Node* current = NULL;  

    int n, i, data;

    printf("Enter number of nodes: ");
    scanf("%d", &n);  

    for (i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);  

        
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->info = data;
        temp->link = NULL;

        
        if (head == NULL) {
            head = temp;         
            current = head;      
        } else {
            current->link = temp;  
            current = current->link;  
        }
    }


    printf("\nLinked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");

    return 0;
}
// ZX78A0HI