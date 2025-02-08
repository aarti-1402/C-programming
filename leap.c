// Write a program  to check if a given year is a leap year or not
#include<stdio.h>
void main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%4==0){
        printf("It is a leap year");
    }
    else{
        printf("It is not leap year");
    }
}