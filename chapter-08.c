//this file is string concept and code
#include<stdio.h>

void printString(char arr[]);

int main(){
    char firstName[] = "AMAR";
    char lastName[] = "SINGH";

    printString(firstName);
    printString(lastName);
    return 0;
}

void printString(char arr[]){
    for(int i = 0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
