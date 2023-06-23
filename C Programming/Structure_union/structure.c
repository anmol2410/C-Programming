// Structures in C is a user-defined data type available in C that allows to combining of data items of different kinds. Structures are used to represent a record. 
#include<stdio.h>
struct student{
    char name[20];
    int  roll_no;
    float marks;
}s1; //structure variable

// structure declared beforehand
//struct structure_name variable1, variable2, .......;
int main(){
    s1.name[20]="Anmol";
    s1.roll_no=17;
    s1.marks=96;

    printf("%d\n",s1.marks);
    return 0;
}