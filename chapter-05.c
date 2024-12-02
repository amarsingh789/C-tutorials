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

//question-05
float convertTemp(float celicus);

int main(){
    float far = convertTemp(32);
    printf("far : %f", far);
    return 0;
}

float convertTemp(float celicus){
    float far = celicus * (9.0/5.0) + 32;
    return far;
}

// this code will give sum of number
int sum(int n);

int main(){
    printf("%d", sum(8));
    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}

// this code wil inform cold/summer 
void summer();
void winter();

int main(){
    printf("enter the temperture: ");
    int temp;
    scanf("%d", &temp);
    if (temp < 15 )
    {
        winter();
    }else{
        summer();
    }
    return 0;
}

void summer(){
    printf("Hots\n");
}
void winter(){
    printf("Cold\n");
}
