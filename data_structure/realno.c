#include<stdio.h>
#include<stdlib.h>
struct realno{
    int num;
    int denum;
};
void assign(struct realno *temp,int num,int denum){
    temp->num=num;
    temp->denum=denum;
}
void compair(struct realno *r1,struct realno *r2){
    if((r1->num==r2->num)&&(r1->denum==r2->denum))
        printf("\nBOth real no. are equal\n");
    else
        printf("\nBoth real no.s are different\n");
        
}

int main(){
    struct realno r1;
    assign(&r1,2,4);
    struct realno r2;
    assign(&r2,3,4);
    compair(&r1,&r2);
    printf("sizeof r1:%lu\n",sizeof(r1));
    return 0;
}
