// print triangle using star pattern
#include<stdio.h>
void main(){
int i,j,k;
    for(i=1;i<=5;i++) // How many rows will we print
    {
        for(j=5;j>i;j--) // left-side space 
        {
          printf(" ");
        }
        for(k=1;k<=i;k++) // print star and print middle and right-side space
        {
           printf("* ");
        }
        printf("\n");
    }
}