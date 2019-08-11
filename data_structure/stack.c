#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
void main(){
    struct stack s;
    init(&s);
    int data,n;
    do{
        printf("\n1:push\n2:pop\n3:isempty\n4:isfull\n5:display\n6:exit\nEnter you choice:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("Enter data:");
                    scanf("%d",&data);
                    push(&s,data);
                    break;
            case 2: pop(&s);
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