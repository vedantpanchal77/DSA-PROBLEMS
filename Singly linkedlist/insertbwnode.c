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

int newval;
printf("Enter Value for node: ");
scanf("%d",&newval);

new->info=newval;
new->link=NULL;

if(new->info<head->info){
    new->link=head;
}
else{
    struct Node* tempp=head;
   while(tempp->link != NULL && tempp->link->info < new->info){
  
        tempp=tempp->link;
    }
    new->link=tempp->link;
    tempp->link=new;
}
 struct Node* temp=head;
 while(temp!=NULL){
    printf("%d->",temp->info);
    temp=temp->link;
 }
free(head);
free(second);
free(third);
free(new);


    return 0;
}