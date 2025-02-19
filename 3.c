#include<stdio.h>
void main(){
    int p = 4, q = 9, r;  
     r = p-- + q++; //4+10=14 ,r=14
     p = ++r - --q;  //14-9=5,p=5,q=9
     printf("%d %d %d\n", p, q, r);



}

