#include<stdio.h>
void main(){
    int a;
    printf("ENTER THE NUMBER :");
    scanf("%d",&a);//a=0
    if(a>0){
        printf("Number is positive");
    }
  else if(a<0)
    {
        printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
}