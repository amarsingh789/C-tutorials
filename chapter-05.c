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

//question-02

int sum(int a, int b);
int main(){
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("sum is %d  :" , s );
    return 0;
}
int sum(int x , int y){
    return x + y;
}
//print table using function
void printTable(int n);

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    printTable(n); //argument

    return 0;
}

void printTable(int n){//parameter
    for(int i =1; i<=10;i++){
        printf("%d\n", i*n);
    }
}
//question (jiska need ho uska value enter or define karo then run code)
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main(){
    float a = 5.0;
    float b = 37.0;

    printf("area will be %f",rectangleArea(a,b) );

    return 0;
}

float squareArea(float side){
    return side * side;
}
float circleArea(float radius){
    return 3.14 * radius * radius;
}
float rectangleArea(float a, float b){
    return a*b;
}

//RECURSION FUNCTION
int fact(int n);

int main(){
     printf("factorial will be %d", fact(5));
}

int fact(int n){
    if(n == 0){
       return 1;
    }
    int factNum1 =fact(n-1);
    int factN = factNum1 * n;
    return factN;  
}
