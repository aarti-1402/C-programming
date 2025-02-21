//find area and perimeter of semi-circle
#include<stdio.h>
void main(){
    float r=9;
    float pi=3.14;
    float area=(pi*r*r)/2;
    printf("%f\n",area);
    float perimeter=pi*r+2*r;
    printf("%f\n",perimeter);
}