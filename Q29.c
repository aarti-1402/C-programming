// Find the Largest Element in an Arra
// Write a C program that takes an array of 10 integers from the user and finds the largest number in the array.
#include<stdio.h>
void main(){
    int i;
int arr[]={ 5,8,12,3,15,7,9,10,4,6};
int largest=arr[0];
for(i=1;i<10;i++){
    if(largest<arr[i])
    largest = arr[i];
}
printf("the largest number is %d",largest);
}

