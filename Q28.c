//Sum of Array Elements
// Write a C program that takes an array of integers from the user (size 5) and calculates the sum of all elements.
#include<stdio.h>
void main(){
int arr[5],i,sum=0;

for(i=0;i<5;i++)
{
printf("enter a number:");
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("sum of array is %d",sum);


}
