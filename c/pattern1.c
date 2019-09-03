#include<stdio.h>

void main(){

int n=5;
int i,j,k,m;

for(i=1;i<=5;i++){
    k=i;
    printf("%d",i);
    for(j=0,m=n-1;j<i-1;j++,m--){
        k=k+m;
        printf("\t%d",k);
    }
    printf("\n");
}
}