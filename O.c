// write a program to determine whether a given number is positive,negative or zero
#include<stdio.h>
void main(){
    int a ;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a>0){
        printf("It is a postive number");
    }
    else if(a<0){
        printf("It is a negative number");
    }
    else{
        printf("It is a zero ");
    }
}