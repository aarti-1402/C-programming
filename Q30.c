//Write a C program that takes an array of 6 integers from the user and prints the elements in reverse order.
#include<stdio.h>
void main(){
int i, arr[6];
printf("enter array");
for(i=0;i<6;i++){
    scanf("%d",&arr[i]);
}
printf("reverse order");
for(i=6;i>0;i--){
    printf("%d ",arr[i]);
}
}