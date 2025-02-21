//Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
#include<stdio.h>
void main(){
    float weight1,weight2,item1,item2,sum,avg;
    printf("Enter number :");
    scanf("%f",&weight1);
    printf("Enter number :");
    scanf("%f",&item1);
    printf("Enter number :");
    scanf("%f",&weight2);
    printf("Enter number :");
    scanf("%f",&item2);
    sum=weight1+weight2+item1+item2;
    avg=sum/4;
    printf("%f",avg);

}