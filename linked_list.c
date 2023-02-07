#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node head;
void insert(int);
void traverse();


void main(){
    int choice,item;
    do{
        printf("operation on linked list:\n1. Append_list\n2.traverse\n3.exit\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nenter the data :");
            scanf("%d",&item);
            insert(item);

            case 2:
            traverse();

            case 3:
            break;
            default:
            printf("enter a valid choice.");
        }
    }while(choice!=0);
}

void insert(int)