#include<stdio.h>
void main(){
    int s,t,u;
    printf("Enter s");
    scanf("%d",&s);
    printf("Enter t");
    scanf("%d",&t);
    printf("Enter u");
    scanf("%d",&u);
    
    if(s>t && s>u){
        printf("s is greater");
    }
    else if(t>s && t>u){
        printf("t is greater");
    }
    else{
        printf("u is greater");

    }
}