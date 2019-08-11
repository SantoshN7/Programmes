#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

void main(){
    int i,n,data,pos;
    struct node *s;
    init(&s);

    do{
        printf("\n1:append\n2:display\n3:insert\n4:count\n5:delete\n6:exit\nEnter your choice:");
        scanf("%d",&n);
        switch(n){

            case 1: printf("\nEnter data:");
                    scanf("%d",&data);
                    append(s,data);
                    break;
            case 2: display(s);
                    break;
            case 3: printf("Enter pos:");
                    scanf("%d",&pos);
                    printf("Enter data:");
                    scanf("%d",&data);
                    insert(s,data,pos);
                    break;
            case 4:count(s);
                    break;
            case 5: printf("Enter position:");
                    scanf("%d",&pos);
                    deletenode(s,pos);
                    break;
            case 6:exit(0);        
        }
    }while(n!=6);
    
}