// sum of array
#include<stdio.h>
void main(){
    int num,arr[6],i,sum=0;
    printf("enter a number");
    for(i=0;i<6;i++){
        scanf("%d",&num);
       sum=sum+arr[i];
    }
    printf("sum of array is %d",sum);
}