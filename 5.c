#include<stdio.h>
void main(){
    int x = 2, y = 4, z = 6;  
    y = x++ + --z;  //3+5=8
    z = y-- - ++x;  //7-3=4 ,z=4
     x = --y + z++;  //6+
     printf("%d %d %d\n", x, y, z);





}