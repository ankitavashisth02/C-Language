#include<stdio.h>

int main(){
    int a=10;
    int b=20;
    printf("vales of a nad b are %d and %d",a,b);
    a=a+b; //10+20=30
    b=a-b;  //30-20=10
    a=a-b;   //30-10=20
    printf("vales of a nad b are %d and %d",a,b);
    return 0;
}