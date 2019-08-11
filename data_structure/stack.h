#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack{
    int arr[MAX];
    int top;
};

void init(struct stack *h){
    h->top=-1;
}

void isempty(struct stack *h){
    if(h->top==-1)
    printf("\nStack is empty ...!!!");
}

void isfull(struct stack *h){
    if(h->top==MAX-1)
    printf("Stack is full...!!!");
}

void push(struct stack *h,int data){
    if(h->top!=MAX-1){
        h->top++;
        h->arr[h->top]=data;
    }
    else{
        printf("Stack overflow...!!!");
    }
}

void display(struct stack *h){
    int i;
    if(h->top!=-1)
    {
        for(i=h->top;i>-1;i--){
            printf("\n|%d|",h->arr[i]);
        }
    }
    else{
        printf("Stack is empty...!!!");
    }
}

void pop(struct stack *h){
    if(h->top!=-1){
        printf("\nPOPED:%d",h->arr[h->top]);
        h->top--;
    }
    else
    {
        printf("stack underflow...!!!");
    }
    
}