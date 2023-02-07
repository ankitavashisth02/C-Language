#include<stdio.h>
#define size 10

int i,n,j;
int arr[size],temp,key;
int s,e,mid;

int binarySearch(int *arr,int k);
void sort(int *arr);

void printElements(int *arr,int n){
    for(i=0;i<n;i++){
        printf("\nelement %d is : %d",i+1,arr[i]);
    }
}

int main(){
    printf("enter the number of elements you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr);
    printf("your elements after sorting :");
    printElements(arr,n);

    printf("\nenter the element you want to search : ");
    scanf("%d",&key);

    int a=binarySearch(arr,key);
    printf("element at %d",a);
}

void sort(int *arr){                      // bubble sort
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int binarySearch(int arr[],int key){
        s=0;
        e=n-1;
        while(s<e){
            mid=(s+e)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){       //element is in first half.
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
}


/*

binary search

while(s<=e){
    mid=(s+e)/2
    
}


*/