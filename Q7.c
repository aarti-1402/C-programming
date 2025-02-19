#include<stdio.h>
void main(){
    int a = 5, b = 7, c;  
    c = a++ + --b;  //5 + 6=11 c=11

    a = ++c - b--;  //12 - 6=6 a=6

    printf("%d %d %d\n", a, b, c);//a=6 , b=5 ,c=11





}


