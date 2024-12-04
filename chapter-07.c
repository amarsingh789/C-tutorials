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
//QUESTION-01
int main(){
    float price[3];
    printf("enter the 3 price: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price-1: %f\n",price[0]+(0.18*price[0])); 
    printf("total price-2: %f\n",price[1]+(0.18*price[1])); 
    printf("total price-3: %f\n",price[2]+(0.18*price[2])); 
    return 0;
}
//CONCEPT OF INT & FLOAT=4-BIT AND CHAR = 1-BIT
//INT CONCEPT
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u",ptr);
    return 0;
}
//FLOAT CONCEPT
int main(){
    float price = 100.0;
    float *ptr = &price;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u",ptr);
    return 0;
}
//CHAR CONCEPT
int main(){
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u",ptr);
    return 0;
}

int main(){

    int aadhaar[5];
    //input
    int *ptr = &aadhaar[0];
    for(int i =0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d",(ptr+i));
    }

    //output
    for(int i = 0; i<5; i++){
        printf("%d index = %d\n",i,*(ptr+i));
    }
    return 0;
}
