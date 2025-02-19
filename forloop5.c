#include<stdio.h>
void main(){
   int i,sum=0;
   printf("the first 7 natural number is :\n");
   for(i=1;i<=10;i++)
   {
    sum=sum+i;// Add the current value of i to sum
    printf("%d ",i);//Print the current value of i
   }
   printf("\nthe sum is :%d",sum);
}