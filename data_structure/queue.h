#include<stdio.h>
#define MAX 5

struct queue{
    int arr[MAX];
    int rear;
    int front;
};

void init(struct queue *h){
    h->rear=-1;
    h->front=0;
}

void isempty(struct queue *h){
    if(h->rear<h->front){
        printf("\nQueue is empty...!!!");
    }
}

void isfull(struct queue *h){
    if(h->rear==(MAX-1)+h->front){
        printf("\nQueue is Full...!!!");
    }
}

void enqueue(struct queue *h,int data){
    if(h->rear<(MAX-1)+h->front){
        h->rear++;
        h->arr[h->rear]=data;
    }
    else{
        printf("\nQueue is overflow...!!!");
    }
}

void dequeue(struct queue *h){
    if(h->rear>=h->front){
        h->front++;
    }
    else{
        printf("\nQueue underflow...!!!");
    }
}

void display(struct queue *h){
    if(h->rear>=h->front){
        int i;
        printf("\nQueue-:");
        for(i=h->front;i<=h->rear;i++){
            printf("\t%d",h->arr[i]);
        }
    }
    else{
        printf("\nQueue is empty...!!!");
    }
}