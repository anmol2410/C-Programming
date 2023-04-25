// Swap two number using third variable
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,t;
    a=10;
    b=20;
    printf("Value of a and b before swap :%d %d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nValue of a and b after swap :%d %d",a,b);
}