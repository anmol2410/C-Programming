#include<stdio.h>
void main(){
    int num;
    int check;
    printf("Enter any Number:");
    scanf("%d",&num);
    check=(num%2==0?printf("even"):printf("Odd"));
    // printf("%d",check);
}