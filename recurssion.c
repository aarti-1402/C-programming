#include<stdio.h>
int factorial(int n){
    if (n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
void main(){
    int num=5;
    printf("Enter a number :");
    scanf("%d",&num);
    if(n<0){
        printf("Factorial of a negative number is not defined\n");
    }else{
        int result = factorial(number);
        printf("Factorial of %d is %d\n",num,result);
    }
}