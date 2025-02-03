#include<stdio.h>
void main(){
    int P;
    int T;
    int R;
    int SI;
    printf("Enter principal amount");
    scanf("%d",&P);
    printf("Enter rate of interest");
    scanf("%d",&R);
    printf("Enter time in years");
    scanf("%d",&T);
    SI=(P*R*T)/100;
    printf("Simple interest:%d",SI);
    
}