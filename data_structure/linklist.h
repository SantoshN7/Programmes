#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};



struct node *getnode(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=0;
    temp->next=NULL;
    return temp;
}

void init(struct node **h){
    *h=getnode();
}

void append(struct node *h,int data){
    struct node *temp;
    struct node *q=h;
    struct node *p=q->next;

    while(p!=NULL){
        q=p;
        p=p->next;
    }
    temp=getnode();
    q->next=temp;
    temp->next=NULL;
    temp->data=data;
    h->data++;
}

void display(struct node *h){
    struct node *q=h;
    struct node *p=q->next;
    printf("\nlist is :");
    while(p!=NULL){
        printf("\ndata-:%d",p->data);
        p=p->next;
    }

}

void insert(struct node *h,int data,int pos){
    
    if(pos<0 || pos>h->data)
    {
    printf("Invalid Position");
    }
    else{
    struct node *q=h;
    struct node *p=q->next;
    struct node *temp;
    int i;
    for(i=0;i<pos-1;i++,q=p,p=p->next);

    temp=getnode();
    temp->data=data;
    q->next=temp;
    temp->next=p;
    h->data++;
    }
}

void count(struct node *h){
    printf("%d",h->data);
}

void deletenode(struct node *h,int pos){
    
    if(pos<0 || pos>h->data)
    {
    printf("Invalid Position");
    }
    else{
    struct node *q=h;
    struct node *p=q->next;
    struct node *temp;
    int i;
    for(i=0;i<pos-1;i++,q=p,p=p->next);

    
    q->next=p->next;
    free(p);
    h->data--;
    }
}