#include<stdio.h>
void main(){
    int a = 3, b = 6, c = 9;  
     a = b++ + --c;  //6+8=14,a=14
     b = --a - c++;  //13-9=4,b=4
     c = a++ + --b;  //14+3=17
     printf("%d %d %d\n", a, b, c);






}