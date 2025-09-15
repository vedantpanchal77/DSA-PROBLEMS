#include <stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node* link;   
};

int main() {
 struct Node* head= NULL;
 struct Node* second= NULL;  
 struct Node* third= NULL; 
 
 head=(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));

 head->info=10;
 head->link=second;

 second->info=20;
 second->link=third;

 third->info=30;
 third->link=NULL;

 struct Node* new=NULL;
 new=(struct Node*)malloc(sizeof(struct Node));
 
 new->info=5;
 new->link=head;

 head=new;
 second=head->link;
 third=second->link; 
 struct Node* fourth = third->link;
//  RENAME



 struct Node* temp=head;
 while(temp!=NULL){
    printf("%d->",temp->info);
    temp=temp->link;
 }
free(head);
free(second);
free(third);
free(fourth);


    return 0;
}