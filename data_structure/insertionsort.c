#include<stdio.h>

void main(){
    int i,n,j,temp;
    int arr[10];
    printf("\nEnter no. of elements:");
    scanf("%d",&n);

    printf("\nEnter array elements:");
    scanf("%d",&arr[0]);
    for(i=1;i<n;i++){
        scanf("%d",&arr[i]);
        for(j=i;j>=0 && arr[j]>arr[j-1];j--);
        if(arr[j]<arr[j-1]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }

    }
    printf("\nsorted array:");
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
}