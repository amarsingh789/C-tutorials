//This file is structre of c 
#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cpa;
    char name[];
};

int main(){
    struct student s1;
    s1.roll = 0011;
    s1.cpa = 88.36;
    //s1.name = "amar";
    strcpy(s1.name, "Amar");

    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cpa = %f\n", s1.cpa);



    struct student s2;
    s2.roll = 5588;
    s2.cpa = 66.50;
    strcpy(s2.name , "Rahul");

    printf("student name =%s\n",s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cpa = %f\n",s2.cpa);

    struct student s3;
    s3.roll = 548;
    s3.cpa = 76.50;
    strcpy(s3.name , "Raja");

    printf("student name =%s\n",s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cpa = %f\n",s3.cpa);
    return 0;
}
