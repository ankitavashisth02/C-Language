#include<stdio.h>
#define size 10
int i,n,j,temp;

// 14 33 27 35 10

void insertionSort(int *arr,int n){
    for(i=0;i<n-1;i++){
        for(j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
        
}


void printElements(int *arr,int n){
    for(i=0;i<n;i++){
        printf("\nelement %d is : %d",i+1,arr[i]);
    }
}

int main(){
    int arr[size];
    printf("enter the number of elements you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printElements(arr,n);
    printf("\n you have entered %d elements.",n);
    insertionSort(arr,n);
    printElements(arr,n);

    return 0;
}