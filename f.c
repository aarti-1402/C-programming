#include<stdio.h>
void main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num>99 && num<1000){
        printf("it is 3-digit number");
    }
    else{
        printf("it is not 3-digit number");
        
    }
}