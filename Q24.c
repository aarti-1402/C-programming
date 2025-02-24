//  Write a program that sums the digits of a number using a loop
#include<stdio.h>
void main(){
int num,rem,sum=0;
printf("Enter a number :");
scanf("%d",&num);
while(num!=0){
    rem=num%10;
    sum=sum+rem;
    num=num/10;
}
printf("the sum of digit number is %d",sum);

}

