// Write a program that uses a while loop to print all even numbers between 1 and 50
#include<stdio.h>
void main(){
    int number = 1; 
 
    while( number <= 50 ) 
    { 
        if( (number % 2) == 0 ) 
        { 
            printf("%d\n", number); 
        } 
		number++; 
    } 
 
}

