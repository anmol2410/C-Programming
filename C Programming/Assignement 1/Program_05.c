// Average of three numbers
#include<stdio.h>
#include<conio.h>
void main(){
    int num1,num2,num3;
    float avg;
    printf("enter any three numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);

    avg=(num1+num2+num3)/3.0;
    printf("Average of three number is : %f",avg);
    
}