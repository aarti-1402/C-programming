#include<stdio.h>
void main(){
    int a;
    int b;
    int c;
    int average;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    int sum=a+b+c;
    average=sum/3;
    printf("the average is :%d",average);

}