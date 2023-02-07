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

void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("stack is full !!");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("\nyour stack is empty");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        return val;
    }
}

int peek(struct stack* ptr, int i){
    int value= ptr->top-i+1;
    if(value<0){
        printf("invalid poition");
        return -1;
    }
    else{
        return ptr->arr[value];
    }
}

int stackTop(struct stack* ptr){
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack* ptr){
    return ptr->arr[0];
}

int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size* sizeof(int));
    printf("stack has been created successfully");

//    printf("\n%d",isEmpty(s));
//    printf("\n%d",isFull(s));

    push(s,450);
    push(s,440);
    push(s,420);
    push(s,401);
    push(s,40);

//    printf("\n%d",isEmpty(s));
//    printf("\n%d",isFull(s));

    int a=pop(s);
    printf("\n element popped is : %d",a);
    push(s,55);
    push(s,1);

// trversing a stack from top

    for(int j=1;j<=s->top+1;j++){
    printf("\nelement at %d is %d",j,peek(s,j));
    }

// to find the to and bottom most element of the stack

    printf("\n element at top is %d",stackTop(s));
    printf("\n element at bottom is %d",stackBottom(s));

    return 0;
}