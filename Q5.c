// Compute rectangle perimeter and area
#include<stdio.h>
void main(){
    int L,B,area,perimeter;
    printf("Enter length:");
    scanf("%d",&L);
    printf("\nEnter breadth :");
    scanf("%d",&B);

    
    area=L*B;
    printf("area of rectangle :%d\n",area);
    perimeter=2*(L+B);
    printf("perimeter of rectangle :%d",perimeter);
    

    

}