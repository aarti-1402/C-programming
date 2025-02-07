// Using while loop print the sum of even numbers from 1 to 30
#include<stdio.h>
void main(){
    int i=1;
    while(i<=30){
    if(i%2==0){
        printf("%d \n",i);
    }
    i++;
    }
}