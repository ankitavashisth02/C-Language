#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;

void printing(struct node* head){
    while(head!=NULL){
        printf("\ndata is %d",head->data);
        head=head->next;
    }
}

int main(){
    struct node* one=malloc(sizeof(struct node));
    struct node* two=malloc(sizeof(struct node));
    struct node* three=malloc(sizeof(struct node));

    one->data=10;
    two->data=20;
    three->data=30;
    one->next=two;
    two->next=three;
    three->next=NULL;
    printing(one);
    return 0;
}