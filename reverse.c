// write a program of reverse number
#include<stdio.h>
void main(){
    int num;
    int r;
    int rev=0;
    printf("Enter number :");
    scanf("%d",&num);
    while(num!=0){
        r=num%10;
        

        num=num/10;
        rev=rev*10+r;

    }
    printf("reverse of number is %d",rev);
    
}