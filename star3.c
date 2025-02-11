#include<stdio.h>
void main(){
    int i;
    int j;
     for(i=1;i<=5;i++)
     {
      printf("\n");
        for(j=4;j>=i;j--)
        {
          printf("* ");
        }
     }
}