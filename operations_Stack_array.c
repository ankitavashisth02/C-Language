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

int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int *)malloc(s->size* sizeof(int));
    printf("stack has been created successfully");

    printf("\n%d",isEmpty(s));
    printf("\n%d",isFull(s));

    push(s,450);
    push(s,440);
    push(s,420);
    push(s,401);
    push(s,40);

    printf("\n%d",isEmpty(s));
    printf("\n%d",isFull(s));

    int a=pop(s);
    printf("\n element popped. is %d",a);

    return 0;
}