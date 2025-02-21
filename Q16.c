//Write a program that swaps two variables without using a third variable
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Before swapping :a=%d,b=%d\n",a,b);
    a=b;
    b=a;
    printf("After swapping:a=%d,b=%d",a,b);
}