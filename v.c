#include<stdio.h>
void main(){
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("This is an alphabet");
    }
    else if(ch>=0 || ch<=9){
        printf("This is a digit");
    }
    else{
        printf("special character");

    }
}