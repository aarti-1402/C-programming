#include<stdio.h>
void main(){
int x=10,y=5,z;
z =--x + y++;//9+6=15,z=15
x =z++ - --y;//15-=9,
printf("%d %d %d\n",x,y,z);
}