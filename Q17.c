//Write a program that reads an integer from the user and prints its square
#include<stdio.h>
void main(){
    int num,square;
    printf("Enter the number:");
    scanf("%d",&num);
    square=num*num;
    printf("the square of %d is %d",num,square);
}