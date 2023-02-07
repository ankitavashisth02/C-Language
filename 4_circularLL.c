#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traversal(struct node* head){
    struct node* ptr=head;
    do{
        printf("\ndata is %d",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

struct node* insertAtBeg(struct node* head, int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    struct node* p=head->next;
    ptr->data=data;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

struct node* insertAtEnd(struct node* head, int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    struct node* p=head->next;
    ptr->data=data;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}

struct node* insertAtNode(struct node* head, int data, int index){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    struct node* p=head;
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
    five->next=head;

traversal(head);
head=insertAtBeg(head,77);
printf("\nafter insertion at beg.");
traversal(head);
printf("\nafter inserting at end :");
head=insertAtEnd(head,8);
traversal(head);
printf("\nafter inserting at some index value :");
head=insertAtNode(head,33,3);
traversal(head);

    return 0;
}