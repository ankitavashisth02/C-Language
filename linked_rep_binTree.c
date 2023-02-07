#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;                             // self referencing structure
};

struct node* createNode(int data){
    struct node* n;                                   // creating a node pointer
    n=(struct node*)malloc(sizeof(struct node));      //alocating memory in heap
    n->data=data;        
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main(){
/*
    // root node
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;

    // second node
    struct node* p1;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->data=1;
    p1->left=NULL;
    p1->right=NULL;

    // third node
    struct node* p2;
    p2=(struct node*)malloc(sizeof(struct node));
    p2->data=4;
    p2->left=NULL;
    p2->right=NULL;
    */


   struct node* p=createNode(2);
   struct node* p1=createNode(1);
   struct node* p2=createNode(4);
   struct node* p3=createNode(7);
   struct node* p4=createNode(1);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    return 0;
}