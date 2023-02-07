#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traversing(struct node* ptr){
    while(ptr!=NULL){
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    }
}

// case 1:
struct node * deleteFromBeg(struct node *head){
    struct node *ptr= head;
    head=head->next;
    free(ptr);
    return head;
}

// case 2:
struct node* deleteNodeBetween(struct node* head, int index){
    struct node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct node* q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

// case 3:
struct node* deleteLastNode(struct node *head){
    struct node* p=head;
    struct node *q=head->next;
    while(q->next!=NULL){
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

/* case 4:
struct node* deleteValue(struct node *head, int value){
    struct node* p=head;
    struct node *q=head->next;
    while(q->next!=NULL && q->next!=NULL){
        q=q->next;
        p=p->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}
*/

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

    printf("initiallly linked list is: ");
    traversing(head);

    head=deleteFromBeg(head);
    printf("\nafter deleting from beginning");
    traversing(head);

    printf("\ndeleting node in between.");
    head=deleteNodeBetween(head,2);
    traversing(head);

    printf("\ndeleting node from end");
    head=deleteLastNode(head);
    traversing(head);
/*
    printf("\ndeleting node in between.");
    head=deleteValue(head,4);
    traversing(head);
*/
    return 0;
}