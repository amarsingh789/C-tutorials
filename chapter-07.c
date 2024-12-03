//this file all abouts for arrays 
#include<stdio.h>

int main(){
    int marks[3];
    printf("enter physics marks: ");
    scanf("%d", &marks[0]);

    printf("enter math marks :  ");
    scanf("%d", &marks[1]);

    printf("enter chemistry marks: ");
    scanf("%d", &marks[3]);

    printf("physics = %d, math = %d, chemistry = %d", marks[0],marks[1],marks[2] );

}
