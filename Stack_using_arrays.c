// this will have only one one element in stack;

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=50;
    s->top=-1;
    s->arr=(int *)malloc(s->size* sizeof(int));
    s->arr[0]=4;
    s->top++;
    fflush(stdin);
    if(isEmpty(s)){
        printf("stack is empty");
    }
    else{
        printf("stack is not empty");
    }
    
    return 0;
}