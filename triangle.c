// write a program to check if a triangle is valid given its three angles
#include<stdio.h>
void main(){
    int ang1;
    int ang2;
    int ang3;
    int sum;
    printf("enter ang1 :");
    scanf("%d",&ang1);
    printf("enter ang2 :");
    scanf("%d",&ang2);
    printf("enter ang3 :");
    scanf("%d",&ang3);
    sum=ang1+ang2+ang3;
    if(sum<=180){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
}