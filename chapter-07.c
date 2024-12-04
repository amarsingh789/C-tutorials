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

//print array 
void printNumber(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumber(arr, 6);
    return 0;
}

void printNumber(int arr[], int n){
    for(int i =0; i<n; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}
//2D array basic question
int main(){
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] =94;
    marks[0][2] = 89;

    marks[1][0] = 95;
    marks[1][1] =74;
    marks[1][2] = 84;

    printf("%d",marks[1][2]);
    return 0;
}
