//Write a program that uses a loop and if-else to check if a given number is prime
#include<stdio.h>
void main(){
    int n,i=2;
    printf("Enter number :");
    scanf("%d",&n);
    while (i<n-1)
{
    if(n%i==0){
        printf("Not prime number");
        break;
    }
    i=i+1;
}
if(i==n){
    printf("number is prime");


}



}   

