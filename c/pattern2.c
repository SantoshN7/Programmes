#include<stdio.h>

void main(){
    int n=4;
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf("\t");
        }
        for(j=n-i;j>0;j--){
            printf("*\t\t");
        }
        printf("\n");
    }

}