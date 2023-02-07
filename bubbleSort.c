#include<stdio.h>
#define size 10

int main(){
    int arr[size];
    int n,i,j,k=1,temp;
    printf("enter the number of elements you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n you have entered %d elements.",n);

    for(i=0;i<n;i++){
        printf("\nelement %d is : %d",i+1,arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
            }
        }
    }
printf("\n\nelements after sorting by bubble sort are :\n");
    for(i=0;i<n;i++){
        printf("\nelement %d is : %d",i+1,arr[i]);
    }

    return 0;
}


/*

bubble sort

for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
        
    }
}


*/