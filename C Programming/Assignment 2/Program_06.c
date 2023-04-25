// Increament or decrement operators
#include<stdio.h>
void main(){
    int x,y;
    // post increment
    x=10;
    y=x++;
    printf("%d %d",x,y);

    // pre increment
    x=10;
    y=++x;
    printf("\n%d %d",x,y);

    // post decrement
    x=10;
    y=x--;
    printf("\n%d %d",x,y);

    // pre decrement
    x=10;
    y=--x;
    printf("\n%d %d",x,y);
}