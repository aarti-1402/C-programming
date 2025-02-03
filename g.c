#include<stdio.h>
void main(){
    char ch;
    printf("Enter any alphabet");
    scanf("%c",&ch);
    if(ch>='A' && ch<='c'){
        printf("It is uppercase alphabet");
    }
    else if(ch>='a' && ch<='c'){
        printf("It is lowercase alphabet ");
    }
}