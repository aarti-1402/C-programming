// Write a program that calculates the factorial of a given number using a loop
#include<stdio.h>
void main(){
    int num,i,fact=1;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",num,fact);
}
   