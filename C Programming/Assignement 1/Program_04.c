#include <stdio.h>
void main(){
    int rad,area,circumference;

    printf("Enter the value of radius : ");
    scanf("%d",&rad);

    // Area of circle ---
    area=3.14*rad*rad;
    printf("Area of Cicle : %d",area);

    // Circumference of Circle-----
    circumference=2*3.14*rad;
    printf("\nCircumfrence of circle : %d",circumference);

}