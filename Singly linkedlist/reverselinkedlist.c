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

 struct Node* temp=head;
 while(temp!=NULL){
    printf("%d->",temp->info);
    temp=temp->link;
 }
  struct Node* curr=head;
  struct Node* next=NULL;
  struct Node* prev=NULL;
 while(curr!=NULL){
    next=curr->link;
    curr->link=prev;
    prev=curr;
    curr=next;
 }
 
 struct Node* tempp=prev;
 while(tempp!=NULL){
    printf("%d->",tempp->info);
    tempp=tempp->link;
 }

free(head);
free(second);
free(third);


    return 0;
}