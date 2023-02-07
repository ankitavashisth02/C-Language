#include<stdio.h>
#define size 10
int i,n,j,t,k,temp;
// n=5

void selectionSort(int arr[],int n){
    for(i=0;i<n-1;i++){
        t=arr[i+1];
        for(j=i+1;j<n-1;j++){
            if(arr[j]<t){
                t=arr[j];
            }
        }
        printf("\nvalue of t is %d",t);
        if(arr[i]>t){
            temp=arr[i];
            arr[i]=t;
            t=temp;
        }
        t=0;
    }
}

void printElements(int arr[],int n){
    for(i=0;i<n;i++){
        printf("\nElement %d is : %d",i+1,arr[i]);
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
//    printElements(arr,n);
    printf("\n you have entered %d elements.",n);
    selectionSort(arr,n);
    printElements(arr,n);

    return 0;
}