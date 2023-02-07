#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

isEmpty(struct node* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

isFull(struct node* top){
    struct node* p=malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node* push(struct node* top,int x){
    if(isFull(top)){
        printf("stack overflow\n");
    }
    else{
        struct node* n=malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}

void printing(struct node* head){
    while(head!=NULL){
        printf("\ndata is %d",head->data);
        head=head->next;
    }
}


int main(){
    struct node* top=NULL;
    top=push(top, 78);
    top=push(top, 178);
    top=push(top, 728);
    top=push(top, 738);
    printing(top);
    return 0;
}