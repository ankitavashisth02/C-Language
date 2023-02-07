#include<stdio.h>
#define size 10

int i,n;

void linearSearch(int *arr,int k);

int main(){
     int arr[size],key;
    printf("enter the number of elements you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("entered Elements are :");
    for(i=0;i<n;i++){
        printf("\nelement %d is : %d",i+1,arr[i]);
    }

    printf("enter the element you want to search : ");
    scanf("%d",&key);

    linearSearch(arr,key);
}

void linearSearch(int *array,int k){
    for(int i=0;i<n;i++){
        if(k==array[i]){
            printf("element is at %d",i+1);
        }
    }
}