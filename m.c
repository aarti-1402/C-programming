#include<stdio.h>
void main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);

    if(x%5==0){
        printf("number is divisible by 5");
    }
    else{
        printf("not divisible by 5");
        
    }
}