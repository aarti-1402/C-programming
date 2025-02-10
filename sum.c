// Write a program to check if the sum of two numbers is greater than 100
#include<stdio.h>
void main(){
    int a;
    int b;
    int result;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    result=a+b;


    if(result>100){
        printf("sum of two number is greater than 100");
    }
    else{
        printf("not greater than 100");
    }
}