#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printing(struct node* ptr){
    while(ptr!=NULL){
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    }
}

struct node * insertAtBeg(struct node *head,int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node * insertAtIndex(struct node *head,int data,int index){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node * insertAtEnd(struct node *head,int data){
    struct node* ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct node* insertAfterNode(struct node *head,struct node *prevNode,int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

int main(){
    struct node* head=malloc(sizeof(struct node));
    struct node* two=malloc(sizeof(struct node));
    struct node* three=malloc(sizeof(struct node));

    head->data=10;
    two->data=20;
    three->data=30;

    head->next=two;
    two->next=three;
    three->next=NULL;

    printing(head);
    head = insertAtBeg(head,80);
    printf("\nafter insertion at beg.");
    printing(head);

    head=insertAtEnd(head,70);
    printf("\nafter insertion at end");
    printing(head);

    head=insertAtIndex(head,50,1);
    printf("\nafter inserting at some index:");
    printing(head);

    head=insertAfterNode(head,two,550);
    printf("\nafter inserting node after some given node:");
    printing(head);

    return 0;
}