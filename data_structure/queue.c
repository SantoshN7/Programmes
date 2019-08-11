#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
void main(){
    struct queue s;
    init(&s);
    int data,n;
    do{
        printf("\n1:enqueue\n2:dequeue\n3:isempty\n4:isfull\n5:display\n6:exit\nEnter you choice:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("Enter data:");
                    scanf("%d",&data);
                    enqueue(&s,data);
                    break;
            case 2: dequeue(&s);
                    break;
            case 3: isempty(&s);
                    break;
            case 4: isfull(&s);
                    break;
            case 5: display(&s);
                    break;
            case 6:exit(0);
        }
    }while(n!=6);
}