// print 50 even number
#include<stdio.h>
void main(){
    int i;
    printf("first 50 even numbers :\n");
    for(i=2;i<=50;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}