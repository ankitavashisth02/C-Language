#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    }
}
struct node* inOrderPredecessor(struct node* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

struct node* deleteNode(struct node* root,int value){
    struct node* iPre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }

    if(value< root->data){
        deleteNode(root->left,value);
    }
    else if(value> root->data){
        deleteNode(root->right,value);
    }
    else{
        iPre=inOrderPredecessor(root);
        root->data=iPre->data;
        root->left=deleteNode(root->left,iPre->data);
    }
    return root;
}


int main(){
   struct node* p=createNode(5);
   struct node* p1=createNode(3);
   struct node* p2=createNode(6);
   struct node* p3=createNode(1);
   struct node* p4=createNode(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    inorder(p);
    deleteNode(p,5);
    inorder(p);


    
    return 0;
}