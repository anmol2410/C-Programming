//Maximum Number between two Number using ternary
#include<stdio.h>
void main(){
    int num1,num2,max;
    printf("Enter any two numbers:");
    scanf("%d %d",&num1,&num2);
    max=(num1>num2?num1:num2);
    printf("Maximum Number among two is : %d ",max);


}