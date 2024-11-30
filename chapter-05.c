//this is function and recursion file 
//START WITH FUNTION
#include<stdio.h>
//declaration/prototype
void printHello();
void printGoodbye();

int main(){
    printHello();
    printGoodbye();
    return 0;
}

//function 
void printHello(){
    printf("hello World!\n");
    // printf("my name is amar\n");
}
void printGoodbye(){
    printf("Goodbye\n");
}

//question-01
void nameste();
void bonjour();

int main(){
    printf("enter the character india i & french f  : ");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        nameste();
    }else{
        bonjour();
    }
    return 0;
}

void nameste(){
    printf("Nameste\n");
}
void bonjour(){
    printf("Bonjour\n");
}
