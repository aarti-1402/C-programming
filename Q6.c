#include<stdio.h>
void main(){
    int a=5,b=10;
    a=++b;
    b=a-- + b++;
    printf("%d %d\n",a,b);
}