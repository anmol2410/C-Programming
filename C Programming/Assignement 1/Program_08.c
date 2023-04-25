// Swap values without third variable
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    a=10;
    b=20;
    printf("Value of a and b before swap %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValue of a and b after swap %d %d",a,b);
}