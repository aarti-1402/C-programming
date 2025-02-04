#include<stdio.h>
void main(){
    int i=1;
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    do{
        printf("%d*%d=%d \n",num,i,num*i);
        i++;
    }
    while(i<11);
}