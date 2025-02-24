//Write a program that reads a character and checks if it is a vowel (using if-else)
#include<stdio.h>
void main(){
char ch;
printf("Enter character :");
scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
    printf("it is a vowel");
}
else{
    printf("it is constant");
}
}