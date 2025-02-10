#include<stdio.h>
void main(){
    int a;
    int b;
    int result;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    result=a+b;
    if(a+b>100){
        printf("sum of two number is greater than 100");
    }
    else{
        printf("not greater than 100");
    }
}


   
    
