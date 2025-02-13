#include<stdio.h>
void main(){
    int a;
    int b;
    int c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Before swapping : a=%d,b=%d\n",a,b);

    c=a;
    a=b;
    b=c;

    printf("After swapping : a=%d,b=%d\n",a,b);
    
}