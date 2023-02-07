#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;

void printing(struct node* ptr){
    while(ptr!=NULL){
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    }
}

void largest(struct node* head){
    struct node *p=head;
    int i=head->data;
    do{
        if(i< (p->data)){
            i=p->data;
        }
        p=p->next;
    }while(p!=NULL);

    printf("\nlargest value in LL is: %d",i);
}

int main(){
     struct node* head=malloc(sizeof(struct node));
    struct node* two=malloc(sizeof(struct node));
    struct node* three=malloc(sizeof(struct node));
    struct node* four=malloc(sizeof(struct node));
    struct node* five=malloc(sizeof(struct node));

    head->data=7;
    two->data=9;
    three->data=3;
    four->data=4;
    five->data=6;

    head->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=NULL;

    printing(head);
    largest(head);
    return 0;
}