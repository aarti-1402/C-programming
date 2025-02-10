// write a program to check if a given temperature is above freezing point
#include<stdio.h>
void main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    if(num<0){
        printf("temperature is above freezing point");
    }
    else if(num>0){
        printf("temperature is not above freezing point");
    }
}